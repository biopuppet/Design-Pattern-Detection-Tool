message(STATUS "CXX : ${CMAKE_CXX_COMPILER}")

set(WARN_FLAGS "-std=c++11 -Wall")

if(CMAKE_CXX_COMPILER_ID MATCHES Clang)
  set(CMAKE_CXX_FLAGS_DEBUG "-O0 -g3")
  set(CMAKE_CXX_FLAGS_RELEASE "-O3 -DNDEBUG")
  set(WARN_FLAGS "${WARN_FLAGS} ")
endif()

if(CMAKE_CXX_COMPILER_ID MATCHES GNU)
  set(CMAKE_CXX_FLAGS_DEBUG "-O0 -g3")
  set(CMAKE_CXX_FLAGS_RELEASE "-O3 -DNDEBUG")
  set(WARN_FLAGS "${WARN_FLAGS} -Wextra -Wshadow -Wpointer-arith -Winline -Wunreachable-code -Wredundant-decls")
endif()

if (${cmake_build_type_tolower} STREQUAL "debug")
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} ${CMAKE_CXX_FLAGS_DEBUG} ${WARN_FLAGS}")
elseif (${cmake_build_type_tolower} STREQUAL "release")
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} ${CMAKE_CXX_FLAGS_RELEASE} ${WARN_FLAGS}")
endif()

message(STATUS "CXX Flags: " "${CMAKE_CXX_FLAGS}")

include_directories(
  ${PROJECT_SOURCE_DIR}/include
)

add_executable(dpdt
    pugixml.cpp
    gcdr.cpp
    parser.cpp
    # sub_pattern.cpp
    # sp_detector.cpp
    # sfm_analyzer.cpp

    main.cpp
)

set(EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR})
set(LIBRARY_OUTPUT_PATH ${PROJECT_BINARY_DIR}/lib)

install(TARGETS dpdt
    RUNTIME DESTINATION bin
    LIBRARY DESTINATION lib
)
