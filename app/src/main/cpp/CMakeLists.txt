cmake_minimum_required(VERSION 3.4.1)

# 添加头文件
include_directories(${CMAKE_SOURCE_DIR}/include)

add_library(
        native-lib
        SHARED

        # 添加编译的源文件
        ${CMAKE_SOURCE_DIR}/native-lib.cpp
        ${CMAKE_SOURCE_DIR}/RtpPush.cpp
        )

# jrtplib库
add_library( jrtplib STATIC IMPORTED)
set_target_properties( jrtplib
        PROPERTIES IMPORTED_LOCATION
        ${CMAKE_SOURCE_DIR}/lib/libjrtplib.a)

# jthread库
add_library( jthread STATIC IMPORTED)
set_target_properties( jthread
        PROPERTIES IMPORTED_LOCATION
        ${CMAKE_SOURCE_DIR}/lib/libjthread.a)

# log库
find_library(
        log-lib
        log)


target_link_libraries(
        native-lib

        jrtplib
        jthread
        ${log-lib})