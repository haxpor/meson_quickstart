# meson_quickstart

A sample quickstart C++ project that builds a library, and a testing executable binary.

Notice
* Use `set_variable()` to exposes a variable to be consumed by another sub-directory via `get_variable()`.
* Use `declare_dependency()` to avoid repetitive on how to compile the library sharing from `lib/` to `test/`.
* Use `test()` to define the test name

Command notices
* `meson setup <dir>` - to setup the build directory. It is the same as `meson <dir>` (without any sub-command, it defaults to _setup_).
* `meson compile` - while at build directory, to build the project. This is equivalent to `ninja`.
* `meson compile --clean` - while at build directory, to clean the artifacts. This is equivalent to `ninja clean`.
* `meson compile -C <build-dir>` - if not at build directory, we can specify the build directory as well. Same as `ninja -C <build-dir>`.
* `meson test` - execute test name as defined from within meson script

# License
Wasin Thonkaew, MIT
