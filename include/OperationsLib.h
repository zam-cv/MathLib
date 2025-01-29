#include <math.h>
#include <stdexcept>

int sum(int a, int b)
{
	return a + b;
}

int sub(int a, int b)
{
	return a - b;
}

int mul(int a, int b)
{
	return a * b;
}

int divide(int a, int b)
{
	if (b == 0)
	{
		throw std::runtime_error("Division by zero");
	}

	return a / b;
}

