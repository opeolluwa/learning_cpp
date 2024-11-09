/**
 *
exercise 2-3. Create a program that converts inches to feet and inches. In case you’re unfamiliar with imperial units: 1 foot equals 12 inches. an input of 77 inches, for instance, should thus produce an output of 6 feet and 5 inches. prompt the user to enter an integer value corresponding to the number of inches and then make the conversion and output the result.
*/

#include <iostream>
int main()
{
    int inches;
    int feet;

    const int INCHES_PER_FEET = 12;
    std::cout << "The value in inches ";

    std::cin >> inches;

    if (inches < 12)
    {
        feet = 0;
        std::cout << "Feet: " << feet << " Inches: " << inches << std::endl;
    }
    else
    {
        int rem = inches % INCHES_PER_FEET;
        feet = inches / INCHES_PER_FEET;
        std::cout << "Feet: " << feet << " Inches: " << rem << std::endl;
    }
}