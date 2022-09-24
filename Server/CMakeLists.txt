
cmake_minimum_required(VERSION 3.24)
project(QtSimpleChatServerThreaded LANGUAGES CXX)
find_package(QT NAMES Qt6 Qt5 COMPONENTS Core REQUIRED)
find_package(Qt${QT_VERSION_MAJOR} 5.7 COMPONENTS Core Gui Widgets Network REQUIRED)


set(CMAKE_INCLUDE_CURRENT_DIR "YES")
set(CMAKE_AUTOUIC_SEARCH_PATHS Server/../forms)
include_directories(${SRC_BASE_DIR}/forms)
qt_wrap_ui(UI_HEADERS ${UI})

add_executable(Server
    servermain.cpp
    forms/serverwindow.ui

    Sources/chatserver.cpp
    Sources/serverwindow.cpp
    Sources/serverworker.cpp
    Sources/user.cpp

    Headers/chatserver.h
    Headers/serverwindow.h
    Headers/serverworker.h
    Headers/user.h

    ../Common/room.cpp
    ../Common/room.h

)


target_link_libraries(Server PRIVATE Qt${QT_VERSION_MAJOR}::Core Qt${QT_VERSION_MAJOR}::Gui Qt${QT_VERSION_MAJOR}::Widgets Qt${QT_VERSION_MAJOR}::Network)
target_include_directories(Server PUBLIC $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>)
target_compile_definitions(Server PRIVATE QT_NO_CAST_FROM_ASCII QT_NO_CAST_TO_ASCII)
set_target_properties(Server PROPERTIES
        AUTOMOC ON
        AUTOUIC ON
        CXX_STANDARD 11
        CXX_STANDARD_REQUIRED ON
        VERSION "1.0.0"
)

