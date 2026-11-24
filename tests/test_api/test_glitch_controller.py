import pytest
import os
import tempfile
from chipwhisperer import GlitchController, load_gc_results

@pytest.fixture
def gc():
    # Provide a standard controller for tests
    return GlitchController(
        groups=["success", "reset", "normal"],
        parameters=["width", "offset", "ext_offset"]
    )

def test_initialization_defaults(gc):
    """Test that defaults (like _num_steps) initialize correctly."""
    assert gc.param_count == 3
    assert gc.group_count == 3
    assert gc._num_steps == 1
    # Check default steps
    assert gc.steps == [[1], [1], [1]]

def test_set_range_auto_swap(gc):
    """Test that set_range automatically swaps max and min if provided backwards."""
    gc.set_range("width", 50.0, 10.0)
    width_idx = gc.get_param_index("width")
    
    assert gc.parameter_min[width_idx] == 10.0
    assert gc.parameter_max[width_idx] == 50.0

def test_set_step_validation(gc):
    """Test step assignment and constraints (list lengths, positive bounds, types)."""
    # Global step lists update _num_steps
    gc.set_global_step([1.0, 2.0])
    assert gc._num_steps == 2
    assert gc.steps[0] == [1.0, 2.0]

    # Strings should not be treated as iterables and should fail on <= 0 or type errors
    with pytest.raises(TypeError):
        gc.set_global_step("10")
        
    # Mismatched lengths should throw ValueError
    with pytest.raises(ValueError, match="Invalid number of steps"):
        gc.set_step("width", [1, 2, 3])

    # Steps must be positive
    with pytest.raises(ValueError, match="Step size must be positive"):
        gc.set_step("offset", 0)
    with pytest.raises(ValueError, match="Step sizes must be positive"):
        gc.set_global_step([-1, 5])

def test_iteration_counts(gc):
    """Test create_iteration_counts logic used for random bounds."""
    gc.set_range("width", 0, 10)
    gc.set_step("width", 3)
    # span = 10, step = 3 -> int(10/3) + 1 = 3 + 1 = 4 iterations (0, 3, 6, 9)
    counts = gc.create_iteration_counts()
    assert counts[0] == (4,)
    
    # Exact bounds
    gc.set_range("offset", 5, 5)
    gc.set_step("offset", 1)
    counts = gc.create_iteration_counts()
    assert counts[1] == (1,)

def test_glitch_values_unique_references(gc):
    """Validate that the generator yields independent lists, not shared references."""
    gc.set_range("width", 0, 1)
    gc.set_range("offset", 10, 10)
    gc.set_range("ext_offset", 0, 0)
    gc.set_global_step(1)
    
    results = list(gc.glitch_values())
    
    # We should have 2 distinct combinations
    assert len(results) == 2
    assert results[0] == [0.0, 10.0, 0.0]
    assert results[1] == [1.0, 10.0, 0.0]
    
    # Ensure memory addresses of the lists are unique
    assert id(results[0]) != id(results[1])

def test_rand_glitch_values_bounds(gc):
    """Ensure random glitch generator respects bounds and steps accurately."""
    gc.set_range("width", 0, 10)
    gc.set_range("offset", -5, 5)
    gc.set_range("ext_offset", 0, 0)
    
    gc.set_step("width", 2)
    gc.set_step("offset", 3)
    gc.set_step("ext_offset", 1)
    
    gen = gc.rand_glitch_values()
    
    for _ in range(50):
        val = next(gen)
        # Check bounds
        assert 0 <= val[0] <= 10
        assert -5 <= val[1] <= 5
        assert val[2] == 0
        
        # Check steps
        assert val[0] % 2 == 0
        # Offset starts at -5, step 3 -> -5, -2, 1, 4
        assert (val[1] - (-5)) % 3 == 0

def test_results_add_and_calc(gc):
    """Test aggregation and calculation logic for test results."""
    # Same parameters
    gc.add("success", [10, 20, 0], strdesc="Hit1", metadata={"cycle": 1})
    gc.add("success", [10, 20, 0], strdesc="Hit2", metadata={"cycle": 2})
    gc.add("reset", [10, 20, 0])
    
    # Different parameters
    gc.add("normal", [15, 20, 0])
    
    # gc.calc() returns a list of tuples (items), not a dictionary. Wrap it in dict()
    calc_res = dict(gc.calc())
    
    # Match the integer lists we provided via gc.add()
    key1 = (10, 20, 0)
    key2 = (15, 20, 0)
    
    assert key1 in calc_res
    assert calc_res[key1]["success"] == 2
    assert calc_res[key1]["reset"] == 1
    assert calc_res[key1]["total"] == 3
    assert calc_res[key1]["success_rate"] == 2.0 / 3.0
    
    # strdesc and metadata shouldn't break calc aggregations
    assert "strdesc" not in calc_res[key1]
    
    # Test ignore_params logic (ignoring parameter index 0 (width))
    calc_ignored = dict(gc.calc(ignore_params=[0]))
    key_ignored = (20, 0) # (offset, ext_offset)
    
    assert key_ignored in calc_ignored
    assert calc_ignored[key_ignored]["total"] == 4 # 3 from key1 + 1 from key2
    assert calc_ignored[key_ignored]["success"] == 2
    assert calc_ignored[key_ignored]["normal"] == 1

def test_save_and_load(gc):
    """Test saving to and loading from a pickle file restores state correctly."""
    gc.set_range("width", 5, 25)
    gc.set_global_step([2, 4])
    gc.add("success", [10, 20, 30])
    
    with tempfile.NamedTemporaryFile(delete=False, suffix=".gc") as tmp:
        tmp_name = tmp.name
        
    try:
        gc.save(tmp_name)
        
        loaded_gc = load_gc_results(tmp_name)
        
        assert loaded_gc.parameter_min == gc.parameter_min
        assert loaded_gc.parameter_max == gc.parameter_max
        assert loaded_gc._num_steps == 2
        assert loaded_gc.steps == gc.steps
        
        assert loaded_gc.groups == gc.groups
        assert loaded_gc.parameters == gc.parameters
        
        # Results should be successfully unpickled
        orig_keys = list(gc.results._result_dict.keys())
        loaded_keys = list(loaded_gc.results._result_dict.keys())
        assert loaded_keys == orig_keys
        
        assert loaded_gc.results._result_dict[orig_keys[0]]["success"] == 1
        
    finally:
        os.remove(tmp_name)

def test_stats_grouping():
    """Test that custom groupings via stats() combine multiple groups correctly."""
    gc = GlitchController(
        groups=["success", "reset A", "reset B", "normal"],
        parameters=["width", "offset", "ext_offset"]
    )
    
    # Same parameters
    gc.add("reset A", [10, 20, 0])
    gc.add("reset B", [10, 20, 0])
    gc.add("reset B", [10, 20, 0])
    gc.add("success", [10, 20, 0])
    gc.add("normal", [10, 20, 0])
    
    # We want to group 'reset A' and 'reset B' into a single 'reset' group
    group_dict = {
        "combined_reset": ("reset A", "reset B"),
        "success": ("success",)
    }
    
    stats_res = dict(gc.stats(group_dict))
    key1 = (10, 20, 0)
    
    assert key1 in stats_res
    assert stats_res[key1]["total"] == 5
    assert stats_res[key1]["combined_reset"] == 3
    assert stats_res[key1]["combined_reset_rate"] == 3.0 / 5.0
    
    assert stats_res[key1]["success"] == 1
    assert stats_res[key1]["success_rate"] == 1.0 / 5.0
    
    # "normal" should not be included in the output as it wasn't requested
    assert "normal" not in stats_res[key1]