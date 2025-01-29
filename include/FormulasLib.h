#include <math.h>
#include <stdexcept>

int factorial(int n)
{
	if (n < 0)
	{
		throw std::runtime_error("Factorial of negative number is undefined");
	}
	if (n == 0 || n == 1)
	{
		return 1;
	}

	return n * factorial(n - 1);
}

int combination(int n, int k)
{
	return factorial(n) / (factorial(k) * factorial(n - k));
}