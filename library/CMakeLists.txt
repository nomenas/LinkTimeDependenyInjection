cmake_minimum_required(VERSION 3.13)

project(library)

file(GLOB_RECURSE SOURCES "src/*.cpp")
add_library(${PROJECT_NAME} STATIC ${SOURCES})
target_include_directories(${PROJECT_NAME} PUBLIC include)
target_link_libraries(${PROJECT_NAME} PUBLIC util)

file(GLOB_RECURSE FACTORY_SOURCES "factory/*.cpp")
add_library(${PROJECT_NAME}_factory STATIC ${FACTORY_SOURCES})
target_include_directories(${PROJECT_NAME}_factory PUBLIC include PRIVATE src)
target_link_libraries(${PROJECT_NAME}_factory PUBLIC util)

file(GLOB_RECURSE MOCK_FACTORY_SOURCES "mock/factory/*.cpp")
add_library(${PROJECT_NAME}_mock STATIC ${MOCK_FACTORY_SOURCES})
target_include_directories(${PROJECT_NAME}_mock PUBLIC mock include)
target_link_libraries(${PROJECT_NAME}_mock PUBLIC util)