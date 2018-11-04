add_subdirectory(${PROJECT_SOURCE_DIR}/lib/googletest
                 lib/googletest)

add_executable(all_tests
               cub_test.cc
               ${PROJECT_SOURCE_DIR}/src/cub.cc)

target_include_directories(all_tests
                           PUBLIC
                           ${PROJECT_SOURCE_DIR}/inc
                           ${PROJECT_SOURCE_DIR}/test/inc
                           ${gtest_SOURCE_DIR}
                           ${gtest_SOURCE_DIR}/include)

target_link_libraries(all_tests gtest gtest_main)

# Coverage setup
include(CodeCoverage)
APPEND_COVERAGE_COMPILER_FLAGS()
set(COVERAGE_LCOV_EXCLUDES
    '/usr/include/*'
    '${gtest_SOURCE_DIR}/*'
    '${PROJECT_SOURCE_DIR}/test/*')

SETUP_TARGET_FOR_COVERAGE_LCOV(NAME cub_coverage
                               EXECUTABLE all_tests
                               DEPENDENCIES all_tests)