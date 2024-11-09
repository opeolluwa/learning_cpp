/**
 * exercise 2-4. For your birthday you’ve been given a long tape measure and an instrument that measures angles (the angle between the horizontal and a line to the top of a tree, for instance). If you know the distance, d, you are from a tree, and the height, h, of your eye when peering into your angle-measuring device, you can calculate the height of the tree with the formula h + d*tan(angle). Create a program to read h in inches, d in feet and inches, and angle in degrees from the keyboard, and output the height of the tree in feet.
 */

#include <iostream>
#include <cmath>
#include <iomanip>

int main()
{
    int distance;
    int height_of_the_eye;
    double angle;

    std::cout << "Input the distance:";
    std::cin >> distance;

    std::cout << "Input the height of the eye:";
    std::cin >> height_of_the_eye;

    std::cout << "Input the angle:";
    std::cin >> angle;

    double height_of_the_tree = height_of_the_eye + (distance * std::tan(angle));

    std::cout << "the height of the tree is " << height_of_the_tree << std::endl;
}