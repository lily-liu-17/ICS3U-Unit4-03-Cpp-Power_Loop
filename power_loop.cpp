// Copyright Lily Liu All rights reserved.
//
// Created by: Lily Liu
// Created on: Oct 2021
// This program will calculate the the square of each integer
// From 0 to the integer entered and will show if you didn't enter a integer

#include <iostream>
#include <string>

int main() {
    // This program will calculate the the square of each integer
    // From 0 to the integer entered and will show if you didn't enter integer
    int loopCounter = 1;
    int square = 1;
    float userFloat;
    int userInput;
    std::string userInputString;

    // input
    std::cout << "Enter an integer >= 0 : ";
    std::cin >> userInputString;

    // process and output
    try {
        userInput = std::stoi(userInputString);
        userFloat = std::stof(userInputString);
        if (userInput == userFloat) {
            if (userInput < 0) {
                std::cout << "You did not enter a positive integer"
                << std::endl;
            } else {
                for (loopCounter = 0; loopCounter <= userInput;
                loopCounter++) {
                    square = loopCounter * loopCounter;
                    std::cout << loopCounter << " ² "  << " = " << square
                    << std::endl;
                }
            }
        } else {
            std::cout << "You entered a decimal number not an integer"
            << std::endl;
        }
    } catch (std::invalid_argument) {
        std::cout << "Invalid input";
    }

    std::cout << "" << std::endl;
    std::cout << "" << std::endl;
    std::cout << "Done." << std::endl;
}
