#include <iostream>
#include <vector>

// typedef st::vector<std::pair<std::string, int>> pairlist_t (this is like a hash set, or linked pair)

typedef std::string text_t;
typedef int number_t;

using word_t = std::string;
using num_t = int;


int main() {
    text_t firstName = "Dave";
    number_t age = 21;

    num_t bage = 34;
    word_t lastName = "Owen";

    std::cout << "My Name is " << firstName << '\n';
    std::cout << "My last name is " << lastName << '\n';
    std::cout << "My brother's age is " << bage << '\n';
    std::cout << "My age is " << age;
    return 0;
}