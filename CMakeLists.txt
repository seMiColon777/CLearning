cmake_minimum_required(VERSION 3.21)
project(CLearning C)

set(CMAKE_C_STANDARD 90)

file (GLOB_RECURSE files c_primer_plus/*.c)
foreach (file ${files})
    string(REGEX REPLACE ".+/(.+)\\..*" "\\1" exe ${file})
    add_executable (${exe} ${file})
    message (\ \ \ \ --\ src/${exe}.c\ will\ be\ compiled\ to\ bin/${exe})
endforeach ()
