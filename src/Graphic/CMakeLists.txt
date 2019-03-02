project(GraphicApp LANGUAGES CXX)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

find_package(Qt5Core REQUIRED)
find_package(Qt5Quick REQUIRED)

file(GLOB HEADERS   "${CMAKE_CURRENT_SOURCE_DIR}/src/*.hpp")
file(GLOB SOURCES   "${CMAKE_CURRENT_SOURCE_DIR}/src/*.cpp")
file(GLOB RESOURCES "${CMAKE_CURRENT_SOURCE_DIR}/resources/*.qrc")

add_executable(${PROJECT_NAME}
  ${HEADERS}
  ${SOURCES}
  ${RESOURCES}
)

target_link_libraries(${PROJECT_NAME}
  PRIVATE
    Qt5::Core
    Qt5::Quick
    SeveralLib
)
