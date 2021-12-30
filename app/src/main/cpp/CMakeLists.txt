# For more information about using CMake with Android Studio, read the
# documentation: https://d.android.com/studio/projects/add-native-code.html

# Sets the minimum version of CMake required to build the native library.

cmake_minimum_required(VERSION 3.10.2)

#project("kr")
#project("kr2")


add_library(
        kr
        SHARED
        native-lib.cpp
)

add_library(
        kr2
        SHARED
        ../../../../../CCplusShare/Test.cpp
)
include_directories(../../../../../CCplusShare/)

find_library(log-lib log)

target_link_libraries(kr kr2 ${log-lib})