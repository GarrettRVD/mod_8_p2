cmake_minimum_required(VERSION 3.8)
project(mod_8_p2)

set(CMAKE_CXX_STANDARD 11)

#set(SOURCE_FILES max.cpp Resource.cpp Resource.h Person.cpp Person.h BankAccount.cpp BankAccount.h Accum.h)
#set(SOURCE_FILES max.cpp Accumulator.cpp Accum.h Person.h Person.cpp Resource.h Resource.cpp)
#set(SOURCE_FILES playVectors.cpp Person.cpp Person.h Resource.h Resource.cpp)
set(SOURCE_FILES FileInOut.cpp)
add_executable(mod_8_p2 ${SOURCE_FILES})