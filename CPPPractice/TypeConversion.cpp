#include <iostream>

int main() {
    // type conversion = conversion a value of one data type to another
    //                  implicit = automatic
    //                  Explicit = Precede value with new data type (int), (double).

    int x = 3.14;
    double y = (int) 3.14;
    double t = 3.14;\

    std::cout << x;
    std::cout << y;
    std::cout << t << std::endl;



    int correct = 8;
    int questions = 10;
    double score = correct/(double)questions * 100;

    std::cout << score << "%";

    return 0;

}