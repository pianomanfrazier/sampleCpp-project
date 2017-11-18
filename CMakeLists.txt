cmake_minimum_required (VERSION 2.8)
project (run)

file(GLOB_RECURSE sources "src/*.cpp")
file(GLOB_RECURSE test_src "src/*.cpp" "test/*.cpp")
list(REMOVE_ITEM test_src "${CMAKE_CURRENT_LIST_DIR}/src/main.cpp")

add_executable(run ${sources})
target_compile_options(run PUBLIC -std=c++11 -g -Werror -Wall -pedantic)
target_include_directories(run PUBLIC include)

add_executable(unit_tests ${test_src})
target_compile_options(unit_tests PUBLIC -std=c++11 -g -Wall -pedantic)
target_include_directories(unit_tests PUBLIC lib include test)
