#include "gtest/gtest.h"
#include "cub.h"

TEST(cub_test, test_eq) {
  EXPECT_EQ(Cub(10), 1000);
}