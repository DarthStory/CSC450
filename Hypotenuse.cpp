#include <iostream>
#include <cmath>

int main() {

    double a;
    double b;
    double c;

    std::cout << "Enter side A: ";
    std::cin >> a;

    std::cout << "Enter side B: ";
    std::cin >> b;

    a = std::pow(a, 2);
    b = std::pow(b, 2);
    c = std::sqrt(a + b);

    std::cout << "Side C: " << c;

    return 0;


}