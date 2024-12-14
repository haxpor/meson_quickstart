inc_dirs = include_directories('.', '../include')

# get exposed variable from library for its dependency
# declaration, so we don't have to manually re-define how
# to build it again here.
lib_dep = get_variable('lib_dep')

if not lib_dep.found()
  error('Failed to retrieve lib_dep from src/')
endif

test_bin = executable(
  'apptest',
  sources: ['test.cpp'],
  include_directories: inc_dirs,
  dependencies: lib_dep
)

test('General test', test_bin)
