cmake_minimum_required(VERSION 3.22.0)

set(myvar "TemaIEP")
# Project name
project(${myvar})

# Specify the required C++ standard
if(CMAKE_VERSION GREATER "3.1.2") 
    set(CMAKE_CXX_STANDARD 14)
    set(CMAKE_CXX_STANDARD_REQUIRED ON)
    set(CMAKE_CXX_EXTENSIONS OFF)
else()
    if(CMAKE_COMPILER_IS_GNUCXX)
        set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14")
    endif()    
endif()

add_executable(${myvar} classes/main.cpp classes/magazin.cpp classes/magazin.hpp classes/produse.cpp classes/produse.hpp)

