cmake_minimum_required(VERSION 3.5)

project(qglwidget VERSION 0.1 LANGUAGES C CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt6 REQUIRED COMPONENTS Widgets Core Gui OpenGL OpenGLWidgets)
find_package(OpenGL)

set(PROJECT_SOURCES
    main.cpp
    qglwidget.cpp
    qglwidget.h
    qglwidget.ui
    qglwidget.qrc
)

add_executable(qglwidget WIN32 ${PROJECT_SOURCES})

target_link_libraries(qglwidget PRIVATE Qt${QT_VERSION_MAJOR}::Widgets)
target_link_libraries(qglwidget PRIVATE Qt${QT_VERSION_MAJOR}::Core)
target_link_libraries(qglwidget PRIVATE Qt${QT_VERSION_MAJOR}::Gui)
target_link_libraries(qglwidget PRIVATE Qt${QT_VERSION_MAJOR}::OpenGL)
target_link_libraries(qglwidget PRIVATE Qt${QT_VERSION_MAJOR}::OpenGLWidgets)
target_link_libraries(qglwidget PRIVATE ${OPENGL_LIBRARIES})

set_target_properties(qglwidget PROPERTIES WIN32_EXECUTABLE TRUE)

set(CPACK_GENERATOR "ZIP")
set(CPACK_SOURCE_GENERATOR "ZIP")
include(CPack)
install(TARGETS qglwidget RUNTIME DESTINATION bin)