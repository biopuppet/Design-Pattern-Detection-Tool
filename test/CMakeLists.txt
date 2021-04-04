# find_package(Boost COMPONENTS unit_test_framework REQUIRED)

include_directories(
  # ${Boost_INCLUDE_DIRS} 
  ${PROJECT_SOURCE_DIR}/src
  ${PROJECT_SOURCE_DIR}/include
)

# add_executable(log
#   log.c
# )

# add_executable(bits
#   bits.c
# )
# target_link_libraries(log ${Boost_UNIT_TEST_FRAMEWORK_LIBRARY})

# add_test(test_all log bits)
