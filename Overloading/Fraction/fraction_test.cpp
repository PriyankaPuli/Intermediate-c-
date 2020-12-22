#include"fraction.h"
#include<gtest/gtest.h>
namespace{
    Test(Fraction,EmptyConstructor)
    {
    Fraction F1;
    EXPECT_EQ(1,F1.numerator());
    EXPECT_EQ(1,F1.denominator());
    }

    TEST(Fraction,ParamConstructor) {
    Fraction F1(10,10);
    EXPECT_EQ(10,D1.numerator());
    EXPECT_EQ(10,D1.denominator());
    }

    TEST(Distance,SingleParamConstructor) {
    Distance D1(10);
    EXPECT_EQ(10,D1.numerator());
    EXPECT_EQ(1,D1.denominator());
    }
}