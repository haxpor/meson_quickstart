sources = [
	'impl.cpp'
]

inc_dirs = include_directories('../include')

lib_deps = dependency('libcurl', required: true)
lib_compile_args = ['-W', '-Wextra', '-pedantic', '-std=c++17']

# not portable, but we just build only for Linux with GCC/Clang
lib = library('cxxtelebot',
		sources,
		include_directories: inc_dirs,
		cpp_args: lib_compile_args,
		install: true,
		)

lib_dep = declare_dependency(
  include_directories: inc_dirs,
  link_with: lib,
  dependencies: lib_deps
)

# expose variable to the parent meson.build file
set_variable('lib_dep', lib_dep)
