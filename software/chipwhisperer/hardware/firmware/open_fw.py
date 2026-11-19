from importlib import resources
import io

curpath = resources.files("chipwhisperer").joinpath("hardware/firmware")

def res_file_path(dev_name, file):
    return curpath.joinpath(dev_name).joinpath(file)

def bit_raw(dev_name):
    with open(res_file_path(dev_name, "bitstream.bit"), "rb") as f:
        return f.read()

def bit_zip(dev_name, filelike=True):
    with open(res_file_path(dev_name, "bitstream.zip"), "rb") as f:
        data = f.read()
        if filelike:
            data = io.BytesIO(data)
        return data
    pass

def mcufw(dev_name, filelike=True):
    with open(res_file_path(dev_name, "mcufw.bin"), "rb") as f:
        data = f.read()
        if filelike:
            data = io.BytesIO(data)
        return data
    pass

def fwver(dev_name) -> str:
    """Extract firmware version as 'MAJOR.MINOR.DEBUG'."""
    with open(res_file_path(dev_name, "version.txt"), "r") as f:
        text = f.read()
    values: dict[str, str] = {}
    for raw_line in text.splitlines():
        parts = raw_line.strip().split(None, 1)
        if len(parts) == 2:
            values[parts[0]] = parts[1]
    return f"{values['FW_VER_MAJOR']}.{values['FW_VER_MINOR']}.{values['FW_VER_DEBUG']}"


def fwdatetime(dev_name) -> str:
    """Extract firmware build datetime string."""
    with open(res_file_path(dev_name, "version.txt"), "r") as f:
        text = f.read()
    lines = text.splitlines()
    for i, raw_line in enumerate(lines):
        parts = raw_line.strip().split(None, 1)
        if parts and parts[0] == "FW_DATETIME":
            if len(parts) == 2:
                return parts[1]
            if i + 1 < len(lines):
                return lines[i + 1].strip()
    return "UNKNOWN"

def registers(dev_name, filelike=True):
    with open(res_file_path(dev_name, "registers.v"), "rb") as f:
        data = f.read()
        if filelike:
            data = io.BytesIO(data)
        return data
    pass

def getsome_generator(dev_name):
    def getsome(item, filelike=True):
        with open(res_file_path(dev_name, item), "rb") as f:
            data = f.read()
            if filelike:
                data = io.BytesIO(data)
            return data
    return getsome

def _extract_file(getsome, item):
    data = getsome(item).read()
    with open(item, "wb") as f:
        f.write(data)