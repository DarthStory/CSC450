#include <iostream>


namespace first {
    int x = 1;
}

namespace second {
    int x = 2;
}


int main() {
    std::cout << first::x;
    std::cout << second::x;

    using namespace second;
    std::cout << x;

    return 0;
}