#include <iostream>

int main () {

    //if statements = do something if a condition is true
    // if not, then dont do it. 

    int age;

    std::cout << "Enter your age: ";
    std::cin >> age;

    if(age >= 18) {
        std::cout << "Welcome to the site!";

    } else {
        std::cout << "You are not old enough.";
    }
    return 0;
}