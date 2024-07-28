#include <iostream>
#include <string>

int main() {

    std::string firstName;
    std::string lastName;
    std::string wholeName;

    for (int i = 0; i < 3; i++) {

        std::cout << "Iteration " << (i + 1) << " of 3" << std::endl;

        std::cout << "What is your first name? " << std::endl;
        std::cin >> firstName;
        std::cout <<  "What is your last name? " << std::endl;
        std::cin >> lastName;

        wholeName = firstName + lastName;

        std::cout << "Whole Name: " << wholeName << std::endl;
        
    }

    return 0;
}