cmake_minimum_required(VERSION 3.21)
project(clearning C)

set(CMAKE_C_STANDARD 90)

file (GLOB_RECURSE files c_primer_plus/*.c)
foreach (file ${files})
    string(REGEX REPLACE ".+/(.+)\\..*" "\\1" exe ${file})
    add_executable (${exe} ${file} c_primer_plus/chapter03/3.1/platinum.c)
    message (\ \ \ \ --\ src/${exe}.c\ will\ be\ compiled\ to\ bin/${exe})
endforeach ()
