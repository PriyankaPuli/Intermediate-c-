#include "point.h"
#include <gtest/gtest.h>
namespace {
TEST(Point, inta) {
  Point<int> P(10,20);
  EXPECT_EQ(0, P.quadrant());
}
TEST(Point, doublea) {
  Point<double> P1(10.22,-20.33);
  EXPECT_EQ(3, P1.quadrant());
}
}