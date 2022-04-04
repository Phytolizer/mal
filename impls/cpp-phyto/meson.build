project(
    'mal',
    'cpp',
    version : '0.1.0',
    license : 'MIT',
    default_options : [
        'cpp_std=c++20',
        'warning_level=3',
        'optimization=g',
        'default_library=static',
    ],
)

readline_dep = dependency('readline')

executable(
    'step0_repl',
    'step0_repl.cpp',
    dependencies : [readline_dep],
)
