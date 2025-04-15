cmake_minimum_required(VERSION 3.10)
set(CMAKE_CXX_STANDARD 20)
project(GTestu LANGUAGES CXX)

set(GTEST_DIR /opt/homebrew/opt/googletest)

include_directories(${GTEST_DIR}/include)

# Add your source files
add_executable(${PROJECT_NAME} 
        src/Student.cpp
        test/test.cpp
)

# Link Google Test libraries
target_link_libraries(${PROJECT_NAME} 
        ${GTEST_DIR}/lib/libgtest.a
        ${GTEST_DIR}/lib/libgtest_main.a
)