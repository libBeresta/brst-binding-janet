## brst-binding-janet

Language binding for the libBeresta library for [Janet][janet] language.

[`libBeresta`][libBeresta] is a free, open-source,
cross-platform library for generating PDF files.

This repository is a member of the `brst-binding-<lang>` family of language
bindings for the `libBeresta` library, intended for the [Janet][janet] language.

The language bindings are automatically generated
from canonical definitions presented as S-expressions
in [gen/data/*.lsp][gen-data], which are updated along with the library.

## Status: v1.0.1
- Library API is automatically generated from `gen/data/*.lsp`
- Build tested only on Linux
- Implemented as _Janet native_
- Released together with the main library

## Mandatory components

By convention adopted in the `libBeresta` library, each language
binding must contain two mandatory files:

- [README.md](README.md) &ndash; description of the language binding
- [CMakeLists.txt](CMakeLists.txt) &ndash; entry point for generating
language binding files, verifying its functionality, and building
a redistributable archive.

All other content is determined by the specifics of working with projects 
in [Janet][janet].

## Quick Start

### Installation

Clone the language binding repository:

```sh
git clone https://github.com/libBeresta/brst-binding-janet.git
```

Build the library:

```sh
cd brst-binding-janet
cmake -S . -B _build -DLIBBRST_SHARED_LIB=OFF
cmake --build _build
```
The `_build` name is important; it is used in subsequent work with the library.

### Building Janet native

Janet sources use Janet bundle to build _Janet native_.

Build and install the Janet bundle:

```sh
janet-pm build
janet-pm install
```

A library containing the language binding code will be built and installed
into the Janet ecosystem. 

Now you can verify that everything works:

```sh
cmake --build _build --target check
```

or (which is the same):

```sh
janet-pm test
```

It should print the message

```
All tests passed.
```

### Usage

You can now navigate to the demos/ folder and start running examples by calling

```sh
janet minimal.janet
```

After each run, a corresponding `*.pdf` file should be created.

## Usage as Janet dependency

It is possible to use library as an dependency to Janet bundle.

Make project folder and folder `bundle`

```sh
mkdir -p prj/bundle
```

Create file `prj/bundle/info.jdn` with contents:

```
@{:author "Your Name"
  :description "libBeresta test"
  :license "MIT"
  :jpm-dependencies @["spork"
                      {:url "https://github.com/libBeresta/brst-binding-janet.git"}
                      {:url "https://github.com/rwtolbert/janet-native-tools.git" :tag "0.2.0"}]
  :name "brst-test"
  :version "1.0.1"}

```
Create file `prj/bundle/info.jdn` with contents:

```
(use brst)

(with-pdf-document pdf "minimal.pdf"
  (let [page (doc-page-add pdf)]
    (page-setsize page
                  page-size-a4
                  page-orientation-landscape)))

```

Then run 

```
cd prj
janet-pm deps
janet-pm build
```
There should be file `minimal.pdf` created. Enjoy!

## Next steps

The libBeresta library is under development; progress can be tracked
in the repository [https://github.com/libBeresta/libBeresta][libBeresta],
as well as on the website [libberesta.ru](libberesta.ru).

[libBeresta]: https://github.com/libBeresta/libBeresta
[gen_readme]: https://github.com/libBeresta/libBeresta/blob/master/gen/README_ru.md
[gen]: https://github.com/libBeresta/libBeresta/blob/master/gen/
[org]: https://github.com/libBeresta
[janet]: https://janet-lang.org/
