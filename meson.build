project('ffc', 'c',
  version : '0.1',
  default_options : [
    'c_std=c11',
    'warning_level=3'
  ]
)

cc = meson.get_compiler('c')
if cc.has_argument('-fno-builtin')
    add_project_arguments('-fno-builtin', language : 'c')
endif

is_hosted = cc.get_define('__STDC_HOSTED__').to_int()
has_strings = cc.check_header('unistd.h')

sources = []

subdir('memory')
subdir('math')
subdir('io')

lib = library('ffc', sources,
  install : true,
  gnu_symbol_visibility: 'hidden',
)

# Make this library usable as a Meson subproject.
ffc_dep = declare_dependency(
  link_with : lib
)

pkg_mod = import('pkgconfig')
pkg_mod.generate(name: 'ffc',
  description : 'A libc compat layer',
  libraries: lib
)
