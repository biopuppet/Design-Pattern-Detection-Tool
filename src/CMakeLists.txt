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

set(ALL_SOURCE_FILES 
    graph.cpp
    parser.cpp
    sp_detector.cpp
    pattern.cpp
    pattern_analyzer.cpp
    main.cpp
)

# LINK_DIRECTORIES(${PROJECT_BINARY_DIR}/lib)

add_library(pugixml STATIC
    pugixml.cpp
)

add_executable(dpdt
    ${ALL_SOURCE_FILES}
)

TARGET_LINK_LIBRARIES(dpdt pugixml)

set(EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR})
set(LIBRARY_OUTPUT_PATH ${PROJECT_BINARY_DIR}/lib)

install(TARGETS dpdt
    RUNTIME DESTINATION bin
    LIBRARY DESTINATION lib
)

set(CLANG_FORMAT clang-format)


add_custom_target(format
    COMMENT "Running clang-format to change files"
    COMMAND cd ${PROJECT_SOURCE_DIR}/src && ${CLANG_FORMAT}
    -style=file
    -i
    ${ALL_SOURCE_FILES} *.hpp
)

add_custom_target(format-check
    COMMENT "Checking clang-format changes"
    # Use ! to negate the result for correct output
    COMMAND !
    cd ${PROJECT_SOURCE_DIR}/src && ${CLANG_FORMAT}
    -style=file
    -output-replacements-xml
    ${ALL_SOURCE_FILES} | grep -q "\"replacement offset\""
)

add_custom_target(wc
    COMMENT "Counting LOC..."
    COMMAND cd ${PROJECT_SOURCE_DIR}/src && wc -l ${ALL_SOURCE_FILES} *.hpp
)
