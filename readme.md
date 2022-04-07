# FFlibc
This is an prototype of layering several function of the standard c library while maintaining ABI compatibility with the system's libc. It try to avoid using extension or any internal implementation details of the system libc.

## Build
It needs [meson](https://mesonbuild.com/) to build.

```bash
meson build
ninja -C build
ninja -C build install
```