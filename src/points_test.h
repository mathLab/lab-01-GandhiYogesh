#include <deal.II/base/point.h>

#include <gtest/gtest.h>

using namespace dealii;


TEST(Pythagoras, Norm)
{
  Point<2> x(3, 4);
  ASSERT_EQ(x.norm(), 5);
}


TEST(Pythagoras, Distance)
{
  Point<2> x(4, 5);
  Point<2> y(1, 1);
  ASSERT_EQ(x.distance(y), 5);
}


TEST(Pythagoras, ScalarProduct)
{
  Point<2> x(3, 4);
  ASSERT_EQ(x * x, 25);
}

TEST(Pythagoras3, Norm3)
{
  Point<3> x(3, 4, 0);
  ASSERT_EQ(x.norm(), 5);
}


TEST(Pythagoras3, Distance3)
{
  Point<3> x(4, 5, 0);
  Point<3> y(1, 1, 0);
  ASSERT_EQ(x.distance(y), 5);
}

TEST(Pythagoras3, ScalarProduct3)
{
  Point<3> x(3, 4, 0);
  ASSERT_EQ(x * x, 25);
}