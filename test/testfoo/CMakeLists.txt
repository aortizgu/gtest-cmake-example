add_executable(
  testfoo
  testfoo.cpp
)

target_link_libraries(
  testfoo
  libfoo
  GTest::gtest_main
  GTest::gmock_main
)

include(GoogleTest)
gtest_discover_tests(testfoo)

add_test(
  testfoo
  testfoo
)