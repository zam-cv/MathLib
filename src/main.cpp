#include <iostream>
#include "MyMathLib.h"
#include "FormulasLib.h"
#include "OperationsLib.h"

int main()
{
    std::cout << "Hello World!\n";
    std::cout << "Sqrt(9) = " << mySqrt(9) << '\n';
    std::cout << "Combination(5, 2) = " << combination(5, 2) << '\n';
    std::cout << "Factorial(5) = " << factorial(5) << '\n';
    std::cout << "Factorial(10) = " << factorial(10) << '\n';
    std::cout << "Sum(1, 2) = " << sum(1, 2) << '\n';
    std::cout << "Sub(3, 2) = " << sub(3, 2) << '\n';
    std::cout << "Mul(3, 2) = " << mul(3, 2) << '\n';
    std::cout << "Div(3, 2) = " << divide(3, 2) << '\n';
}