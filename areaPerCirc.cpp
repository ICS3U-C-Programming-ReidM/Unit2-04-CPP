// Copyright (c) 2025 Reid MacLean All rights reserved.
//
// Created by Reid MacLean
// Created on March 2025
// This program calculates the area and circumference of a circle using math.pi

#include <cmath>  // For mathematical functions like M_PI
#include <iostream>

int main() {
    double rad = 6;                  // Radius of the circle
    double circ = 2 * M_PI * rad;    // Circumference of the circle
    double area = M_PI * rad * rad;  // Area of the circle

    // Display the results
    std::cout << "Circumference: " << circ << std::endl;
    std::cout << "Area: " << area << std::endl;

    return 0;
}
