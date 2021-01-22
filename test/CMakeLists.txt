include_directories(${CMAKE_SOURCE_DIR}/include)
link_directories(${CMAKE_SOURCE_DIR}/lib)

add_executable(test_sum main.cpp test_sum.cpp)

target_link_libraries(test_sum lib_sum gtest pthread)

add_test(NAME test_sum COMMAND test_sum)