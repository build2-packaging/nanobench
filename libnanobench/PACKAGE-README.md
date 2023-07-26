# nanobench

This project builds and defines the build2 package for the [nanobench](https://github.com/martinus/nanobench) library.

The packaging code is licensed under the MIT License, the upstream artifacts are licensed under the terms and conditions of nanobench.

## Usage

You can simply add this package as dependency to your project by specifying it in your `manifest`:

```
depends: libnanobench ^4.3.11
```

Then just pick the targets that you need:

```
import libs  = libnanobench%lib{nanobench}
```
