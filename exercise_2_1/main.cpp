/***
 * exercise 2-1. Write a program that will compute the area of a circle. the program should prompt for the radius of the circle to be entered from the keyboard, calculate the area using the formula area = pi * radius * radius, and then display the result.
 */


#include <iostream>
#include <cmath>
int main(){
    
    double radius;
    std::cout<< "Input the radius of the circle" << std::endl;

    std::cin >> radius;
    double area = 3.142 * radius * radius;

    std::cout << " the answer is " << area << std::endl;
}