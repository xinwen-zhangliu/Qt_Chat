cmake_minimum_required(VERSION 3.24)
project(QtSimpleChatClient LANGUAGES CXX)
find_package(QT NAMES Qt6 Qt5 COMPONENTS Core REQUIRED)
find_package(Qt${QT_VERSION_MAJOR} 5.7 COMPONENTS Core Gui Widgets Network REQUIRED)

set(CMAKE_INCLUDE_CURRENT_DIR "YES")
set(CMAKE_AUTOMOC "YES")
set(CMAKE_AUTOUIC_SEARCH_PATHS Client/../forms)
set(UI ${CMAKE_CURRENT_LIST_DIR}/forms/chatmainwindow.ui)
include_directories(${SRC_BASE_DIR}/forms)
qt_wrap_ui(UI_HEADERS ${UI})

add_executable(Client
    clientmain.cpp


    forms/mainchatwindow.ui
    Sources/chatwindow.cpp
    Sources/chatclient.cpp
    Sources/parser.cpp
    Headers/chatwindow.h
    Headers/chatclient.h
    Headers/parser.h

)
target_link_libraries(Client PRIVATE Qt${QT_VERSION_MAJOR}::Core Qt${QT_VERSION_MAJOR}::Gui Qt${QT_VERSION_MAJOR}::Widgets Qt${QT_VERSION_MAJOR}::Network)
target_include_directories(Client PUBLIC $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>)
target_compile_definitions(Client PRIVATE QT_NO_CAST_FROM_ASCII QT_NO_CAST_TO_ASCII)
set_target_properties(Client PROPERTIES
        AUTOMOC ON
        AUTOUIC ON
        CXX_STANDARD 11
        CXX_STANDARD_REQUIRED ON
        VERSION "1.0.0"
)

