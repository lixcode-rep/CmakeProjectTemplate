cmake_minimum_required(VERSION 3.0.0)

project(SeveralLib LANGUAGES CXX)

file(GLOB HEADERS "${CMAKE_CURRENT_SOURCE_DIR}/include/SeveralLib/*.hpp")
file(GLOB SOURCES "${CMAKE_CURRENT_SOURCE_DIR}/src/*.cpp")

add_library(${PROJECT_NAME} SHARED
  ${HEADERS}
  ${SOURCES}
)

include(GenerateExportHeader)
generate_export_header(${PROJECT_NAME})

target_include_directories(${PROJECT_NAME}
  PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/include
    ${CMAKE_CURRENT_BINARY_DIR}
  PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}/include/SeveralLib
)

