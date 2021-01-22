#include "sum.h"
#include "gtest/gtest.h"

TEST(TestSum, TheSumof2And3Is5)
{
    int res = Sum(2, 3);
    EXPECT_EQ(5, res);
}