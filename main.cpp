#include <iostream>

// Global variable for age (needed so all functions can access it)
int age;

// Function to declare age variable (kept for original structure)
void FunctionAge(){
    // age variable already global, nothing needed here
}

// Function to get user's age input
void Age_Entry(){
    std::cout << "Enter your age: ";
    std::cin >> age;
}

// Function to check if user is a child
void FunctionChild(){
    if(age >= 0 && age <= 10)
        std::cout << "Child" << std::endl;
}

// Function to check if user is young
void FunctionYoung(){
    if(age >= 11 && age <= 17)
        std::cout << "Young" << std::endl;
}

// Function to check if user is adult
void FunctionAdult(){
    if(age >= 18 && age <= 59)
        std::cout << "Adult" << std::endl;
}

// Function to check if user is elderly
void FunctionEnderly(){
    if(age >= 60)
        std::cout << "Elderly" << std::endl;
}

int main(){

    FunctionAge(); // Original function call
    Age_Entry();   // Get user's age

    FunctionChild();   // Check for child category
    FunctionYoung();   // Check for young category
    FunctionAdult();   // Check for adult category
    FunctionEnderly(); // Check for elderly category

    return 0;
}
