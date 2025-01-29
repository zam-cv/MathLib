#include <gtest/gtest.h>
#include "FormulasLib.h"

// factorial

TEST(FactorialTestCase, FactorialTest)
{
	ASSERT_EQ(1, factorial(0));
}

TEST(FactorialTestCase, FactorialTestNegative)
{
	ASSERT_THROW(factorial(-1), std::runtime_error);
}

TEST(FactorialTestCase, FactorialTestLarge)
{
	ASSERT_EQ(3628800, factorial(10));
}

// combination

TEST(CombinationTestCase, CombinationTest)
{
	ASSERT_EQ(1, combination(0, 0));
}

TEST(CombinationTestCase, CombinationTestNegative)
{
	ASSERT_THROW(combination(-1, 0), std::runtime_error);
}

TEST(CombinationTestCase, CombinationTestLarge)
{
	ASSERT_EQ(10, combination(5, 2));
}