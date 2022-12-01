// Copyright Cristiano 2022
//
// Created by Cristiano Sellitto
// Created in December 2022
// This program turns a level to a percentage

#include <iostream>
#include <string>

int FindPercentage(std::string level) {
    int percent;

    if (level == "4+") {
        percent = 97;
    } else if (level == "4") {
        percent = 91;
    } else if (level == "4-") {
        percent = 83;
    } else if (level == "3+") {
        percent = 78;
    } else if (level == "3") {
        percent = 75;
    } else if (level == "3-") {
        percent = 71;
    } else if (level == "2+") {
        percent = 68;
    } else if (level == "2") {
        percent = 65;
    } else if (level == "2-") {
        percent = 61;
    } else if (level == "1+") {
        percent = 58;
    } else if (level == "1") {
        percent = 55;
    } else if (level == "1-") {
        percent = 51;
    } else if (level == "R") {
        percent = 30;
    } else if (level == "NE") {
        percent = 0;
    } else {
        percent = -1;
    }
    return percent;
}

int main() {
    // Gets the level and outputs the percent if the level is valid

    int percentInteger;

    std::string levelText;
    std::cout << "Enter a level to convert to percent: ";
    std::cin >> levelText;
    std::cout << std::endl;
    percentInteger = FindPercentage(levelText);
    if (percentInteger != -1) {
        std::cout << "A level of " << levelText;
        std::cout << " has a middle percent of " << percentInteger << "%";
        std::cout << std::endl;
    } else {
        std::cout << levelText << " is not a valid level.";
        std::cout << std::endl;
    }

    std::cout << std::endl;
    std::cout << "Done." << std::endl;
}
