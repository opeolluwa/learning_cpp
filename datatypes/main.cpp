#include <iostream>

int main()
{
    int age(5);
    std::cout << "Age is " << age << std::endl;

    char value = 6;
    std::cout << "The value of everything is " << value << std::endl;

    const unsigned int matric_number = 201888138;
    std::cout << "The matric number is " << matric_number << std::endl;

    double gross_profit = 15000000.567;
    std::cout << "We made " << gross_profit << " last week" << std::endl;

    int white_in_hex = 0xfff;
    int three_in_binary = 0B011;
    int ten_in_octal = 012;

    std::cout << "Bin =" << three_in_binary
              << " Octal = " << ten_in_octal
              << " Hexadecimal= " << white_in_hex
              << std::endl;
}