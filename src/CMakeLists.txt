message(STATUS "CXX : ${CMAKE_CXX_COMPILER}")

set(WARN_FLAGS "-std=c++11 -Wall")

set(CMAKE_CXX_FLAGS_DEBUG "-O0 -g3")
set(CMAKE_CXX_FLAGS_RELEASE "-O3 -DNDEBUG")

if(CMAKE_CXX_COMPILER_ID MATCHES Clang)
  set(WARN_FLAGS "${WARN_FLAGS} -Wextra -Wshadow ")
elseif(CMAKE_CXX_COMPILER_ID MATCHES GNU)
  set(WARN_FLAGS "${WARN_FLAGS} -Wextra -Wshadow -Wpointer-arith -Wunreachable-code -Wredundant-decls")
endif()

if (${cmake_build_type_tolower} STREQUAL "debug")
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} ${CMAKE_CXX_FLAGS_DEBUG} ${WARN_FLAGS}")
elseif (${cmake_build_type_tolower} STREQUAL "release")
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} ${CMAKE_CXX_FLAGS_RELEASE} ${WARN_FLAGS}")
endif()

message(STATUS "CXX Flags: " "${CMAKE_CXX_FLAGS}")

set(GRAMMAR_DIR "${PROJECT_SOURCE_DIR}/grammar")

# Call macro to add lexer and grammar to your build dependencies.
antlr_target(JLexer ${GRAMMAR_DIR}/Java8Lexer.g4 LEXER
             PACKAGE antlrcpptest)
antlr_target(JParser ${GRAMMAR_DIR}/Java8Parser.g4 PARSER
             PACKAGE antlrcpptest
             DEPENDS_ANTLR JLexer
             COMPILE_FLAGS -lib ${ANTLR_JLexer_OUTPUT_DIR}
            LISTENER # Optional
            VISITOR # Optional
)

include_directories(
  ${PROJECT_SOURCE_DIR}/include
  ${ANTLR4_INCLUDE_DIRS}
# include generated files in project environment
  ${ANTLR_JLexer_OUTPUT_DIR}
  ${ANTLR_JParser_OUTPUT_DIR}
)

set(ALL_SOURCE_FILES 
    graph.cpp
    parser.cpp
    sp_detector.cpp
    # pattern.cpp
    # pattern_analyzer.cpp
    main.cpp
)

add_executable(dpdt
    ${ALL_SOURCE_FILES} 
    ${ANTLR_JLexer_CXX_OUTPUTS}
    ${ANTLR_JParser_CXX_OUTPUTS}
)

TARGET_LINK_LIBRARIES(dpdt antlr4_static)

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
