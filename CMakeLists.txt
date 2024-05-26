cmake_minimum_required(VERSION 3.28)
project(EurobotMain)

set(CMAKE_CXX_STANDARD 17)

add_subdirectory(lib/NetworkPacket)


file(GLOB_RECURSE SOURCES "src/*.cpp")
add_executable(${PROJECT_NAME} ${SOURCES})
target_link_libraries(${PROJECT_NAME} PUBLIC NetworkPacket)
