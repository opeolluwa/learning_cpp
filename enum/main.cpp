#include <iostream>
//
int main()
{
    enum class Gender
    {
        Male = 1,
        Female,
        Other
    };

    Gender my_gender = Gender::Male;
    std::cout << "my gender " << static_cast<int>(my_gender) << std::endl;
    return 0;
}
