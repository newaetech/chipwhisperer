# Site Details

## How and Why

This site is built using 
[Jupyter Book](https://jupyterbook.org/en/stable/intro.html), version 1.

The source is a mix of reStructuredText (mostly in the software API and
installation sections), Markdown (mostly in the hardware sections), and
Jupyter Notebooks (in the Tips and Tricks section).

This mix of formats exists for good reasons:
* reStructuredText is needed for the API documentation (through [Sphinx
  autodoc](https://www.sphinx-doc.org/en/master/usage/extensions/autodoc.html)).
* Markdown is used because some of the content originates from GitHub
  repositories and we need it to render on GitHub (e.g. [our target
  pages](https://github.com/newaetech/chipwhisperer-target-cw308t)).
* Jupyter Notebooks are perfect for some of our tips and tricks entries
  since they allow the code to be run (and thus be verified correct), users
  can see its output, and they can also download the notebook for their own
  use.

Jupyter Book **1.x** allows us to mix and match these three formats --
unfortunately, version 2 drops support for reStructuredText.
reStructuredText support is a must since we use it extensively for our API
documentation.

The site is hosted on ReadTheDocs because:
* it has good Jupyter Book support
  ([useful](https://jupyterbook.org/en/stable/publish/readthedocs.html) 
  [links](https://github.com/readthedocs-examples/example-jupyter-book))
* it supports versioning, which allows us to tie each ChipWhisperer release
  to a different version of the documentation site

The full documentation site can be built locally (i.e. before deployment) by
installing the requirements in `docs/requirements.txt` and running `jb build
source`.[^1]

All the documentation source is in the [ChipWhisperer docs
folder](https://github.com/newaetech/chipwhisperer/tree/develop/docs), with
the exception of two other repositories which are pulled in as git submodules:
`docs/source/cw_tips_tricks` and `docs/source/chipwhisperer-target-cw308t/`.

This keeps the main chipwhisperer repository smaller (most users who
download it don't need to build the documentation). At the same time, we
want the documentation to be tied to the ChipWhisperer source; by having the
root of the documentation in the ChipWhisperer source repository, it's much
easier to keep source code and documentation synchronized.

## Notebooks

The Jupyter Notebooks in our Tips and Tricks section are a special case.
The main premise of Jupyter Book is that notebooks are run when the
documentation is built. We have notebooks, we want a documentation site;
perfect, right? But there's one hitch: our notebooks need ChipWhisperer
hardware to run! This rules out running them on ReadTheDocs (or other
services for building and hosting Jupyter Books). Moreover, different
notebooks may require different capture and/or target hardware.

The solution? Run the notebooks locally (and manually) and commit the
notebooks, *with their output*, to the `cw_tips_tricks` repository. The
Jupyter Book build process allows you to specify that you don't want the
notebooks to be re-run (with `execute_notebooks: no` in the `_config.yml`
configuration file), and so it all works out. 

So we're not really using Jupyter Book in the way that it's intended to be
used, but it works (very well) for us!


(jupyter-book-tips)=
## Jupyter Book Tips

At the time this site was created (early 2025), it seemed that Jupyter Book
wasn't quite popular enough for answers to basic questions to be easily
found. With the big changes in version 2, this might remain the case.

This seems to be a symptom of the fact that Jupyter Book uses many other
tools under the hood (e.g. Sphinx), and how to do certain things is up to
that tool; if searching for "how to do X in jupyter book" doesn't yield
anything, try instead "how to do X in (tool that is used under the hood)".

Here are some non-obvious things we learned while making this site which may
spare others some time and frustration.


### How to Reference Between .rst and .md Files

Surprisingly, the Jupyter Book documentation doesn't explain how to do this
basic thing. There are different ways to do it, but we think that this is
the proper clean way to do it:
* to link to `document.rst` from `.md`: ``{doc}`blah blah <document>` `` or ``{doc}`document` ``
* to link to an `.rst` label `.. _label:` from .md: ``{ref}`blah blah <label>` `` or ``{ref}`label` ``
* to link to an `autodoc`-generated method label from `.md`:
    * in the autodoc-generated html documentation page, look at the anchor link:
      e.g. for
      https://chipwhisperer.readthedocs.io/en/latest/scope-api.html#chipwhisperer.scopes.OpenADC.arm,
      the anchor is `chipwhisperer.scopes.OpenADC.arm`
    * use ``{py:meth}`blah blah <anchor>` ``
* to link to `document.md` from `.rst`: ``:doc:`blah blah <document>` ``
* to link to an `.md` label `(label)=` from .rst: ``:ref:`blah blah <label>` ``
    * note that using implicit section header labels doesn't always work
      and generates a WARNING; use explicit labels as shown here instead


### Formatting
* Markdown blockquoted headings `>#` (which rendered well on our
  https://rtfm.newae.com site) do not render nicely here and prevent that
  section from being included in the table of contents; omit the
  blockquote
* In "pure" Sphinx, extra whitespace at the start of a line renders well
  (there was lots of this in pre-Jupyter Book versions of this site), but
  with Jupyter Book this creates an ugly box


### Dead Links
* Jupyter Book will automatically warn if you have invalid internal links in
  your documentation (which is really handy!)
* It's possible to check external links with `jb build docs --builder linkcheck`, 
  but that didn't work so well for us because some of the sites we link to
  didn't like `jb`'s behaviour and resulted in errors and timeouts

### `autodoc`
* In pure Sphinx-land, `sphinx-autodoc` can be made to find your local code
  by modifying `sys.path` in Sphinx's `conf.py`. This isn't possible here
  (at least, not cleanly), because `conf.py` is dynamically generated.
  Instead, we use `sphinx:local_extensions` in `_config.yml`. This is not
  its intended use and so it generates a "is this really a Sphinx extension
  module?" warning, but it works.


### Miscellaneous
* If a Markdown source file does not begin with a top-level header, its
  table of contents entry will be incorrect
* `<img src>` tags in Markdown aren't supported by default and are 
  [not recommended](https://jupyterbook.org/en/stable/content/figures.html#raw-html-images)
    * Note that in our case, `<img src>` was used for things like sizing
      images, which Jupyter Book does a pretty good job of by default
* GitHub-style Markdown admonitions (e.g. `!!! warning`) are not supported; use
  ```` ```{warning} ```` instead.
* if using github submodules (as we are here), be aware that **all** `.md` and
  `.rst` files in that submodule will get built, even if not explicitly
  included in your `_toc.yml`, and will show up in your search results (this
  happened here with Markdown files in a submodule's `.github` folder); to
  avoid this, use `only_build_toc_files` and `exclude_patterns` in your
  `_config.yml` file


[^1]: when building locally, you'll need to manually copy contributing.md.
  On readthedocs builds, this is done by a `pre_build` command in our
  `.readthedocs.yaml`.


