// Copyright 2025 Mikhail Ibrahim
// This program calculates and displays the area and perimeter
// of a rectangle based on user input.

#include <iostream>

int main() {
    double length, width;

    std::cout << "Enter the length of the rectangle (cm): ";
    std::cin >> length;
    std::cout << "Enter the width of the rectangle (cm): ";
    std::cin >> width;

    double area = length * width;
    double perimeter = 2 * (length + width);

    std::cout << "For a rectangle with length " << length
              << "cm and width " << width << "cm:"
              << std::endl;
    std::cout << "The area is " << area << " cm²."
              << std::endl;
    std::cout << "The perimeter is " << perimeter
              << " cm." << std::endl;

    return 0;
}
