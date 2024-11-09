/**
 * exercise 2-2. using your solution for exercise 2-1, improve the code so that the user can control the precision of the output by entering the number of digits required. to really show off how accurate floating-point numbers can be, you can perhaps switch to double-precision floating-point arithmetic as well. you’ll need a more precise approximation of π. 3.141592653589793238 will do fine.
 */

#include <iostream>
#include <cmath>
#include <iomanip>
int main()
{

    double radius;
    int precision;
    std::cout << "Input the radius of the circle" << std::endl;

    std::cin >> radius;
    double area = 3.142 * radius * radius;

    std::cout << "Input the decimal place of the answer" << std::endl;
    std::cin >> precision;

    std::cout << " the answer is " << std::setprecision(precision) << area << std::endl;
}
