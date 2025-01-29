#include <gtest/gtest.h>
#include "OperationsLib.h"

TEST(MathTestCase, MathTestSum)
{
	ASSERT_EQ(3, sum(1, 2));
}

TEST(MathTestCase, MathTestSub)
{
	ASSERT_EQ(1, sub(3, 2));
}

TEST(MathTestCase, MathTestMul)
{
	ASSERT_EQ(6, mul(2, 3));
}

TEST(MathTestCase, MathTestDiv)
{
	ASSERT_EQ(2, divide(6, 3));
}
