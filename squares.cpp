// Copyright (c) Cameron Carter All rights reserved
//
// Created by: Cameron Carter
// Created on: May 2021
// This program squares ascending integers
#include <iostream>
#include <string>
#include <cmath>

int main() {
    // This program squares numbers
    std::string inputAsString;
    int inputAsInteger;
    int product;
    int loopCounter = 0;

    // Input
    std::cout << "Enter an integer >= 0: ";
    std::cin >> inputAsString;

    // Process and Output
    try {
        inputAsInteger = std::stoi(inputAsString);
        if (inputAsInteger >= 0) {
            for (
                loopCounter = 0;
                loopCounter <= inputAsInteger;
                loopCounter++;
                ) {
                product = pow(loopCounter, 2);
                std::cout << loopCounter << "² = " << product << std::endl;
            }
        } else {
            std::cout << "\n" << inputAsString << " is not a positive integer";
        }
    } catch (std::invalid_argument) {
        std::cout << "\n" << inputAsString
        << " is not a positive integer" << std::endl;
    }
    std::cout << "\nDone." << std::endl;
}
