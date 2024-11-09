#include <iostream>

int main()
{
    double pi = 3.142;

    int pi_as_int = static_cast<int>(pi);

   std::cout << "Pi was cst from " << pi << " to " << pi_as_int << std::endl;
}