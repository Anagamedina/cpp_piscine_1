cmake_minimum_required(VERSION 3.31)
project(cpp_module_00)

set(CMAKE_CXX_STANDARD 14)

include_directories(ex00)
include_directories(ex01)

add_executable(ex_00
        ex00/megaphone.cpp
)

add_executable(ex_01
        ex01/Contact.cpp
        ex01/Contact.hpp
        ex01/main.cpp
        ex01/PhoneBook.cpp
        ex01/PhoneBook.hpp
)
