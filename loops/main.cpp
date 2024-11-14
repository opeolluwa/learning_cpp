#include <iostream>
#include <array>

//
int main()
{
    std::array<double, 5> cgpa = {4.56, 2.34, 5.0, 2.33, 4.12};
    for (size_t index = 0; index < cgpa.size(); index++)
    {
        std::cout << cgpa[index] << std::endl;
    }
    return 0;
}
