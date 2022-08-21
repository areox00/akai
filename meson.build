project('akai', 'cpp',
         default_options : 'cpp_std=c++20')

deps = [
    dependency('sdl2')
]

src = [
    'src/main.cpp',
    'src/app.cpp'
]

if host_machine.system() == 'linux'
    if get_option('buildtype').startswith('debug')
        add_project_arguments(['-g', '-DDEBUG'], language : 'cpp')
        add_project_link_arguments(['-lbfd', '-ldl'], language : 'cpp')
    endif
endif

executable('akai', src, include_directories : 'src', dependencies : deps)
