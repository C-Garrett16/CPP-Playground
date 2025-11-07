#include <iostream>
#include <string>
#include "math_func.h"

int main() {
    // Hello world in C++!
    std::cout << "Hello, World!" << std::endl;
    

    // Variables & Data Types
    int age = 25;                   // Integer
    double weight = 172.5;          // floating point number
    char grade = 'A';               // single character
    bool isCodingFun = true;        // true or false
    std::string name = "Garrett";   // text string

    // Print things to the console
    // std::cout << "Name: " << name << std::endl;
    // std::cout << "Age: " << age << std::endl;
    // std::cout << "Weight: " << weight << std::endl;
    // std::cout << "Grade: " << grade << std::endl;
    // std::cout << "Is coding fun? " << isCodingFun << std::endl;

    // Interactive Printing
    // std::string firstName;
    // std::string ageInput;
    // int yearsOld;

    // std::cout << "What's your first name? ";
    // std::getline(std::cin, firstName); // reads a whole line

    // std::cin.clear();
    // std::cin.sync();

    // std::cout << "How old are you? ";
    // std::getline(std::cin, ageInput);
    // yearsOld = std::stoi(ageInput);  // Casting. This casts the string to an integer.

    // std::cout << "Hello, " << firstName << "! You are " << yearsOld << " years old!" << std::endl;
    std::cout << Math::add(4, 5) << std::endl;

    return 0;



}