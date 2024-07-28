#include <iostream>
#include <chrono>
#include <vector>

typedef std::chrono::minutes timetaken;

constexpr std::chrono::hours operator"" _h(unsigned long long h) {
    return std::chrono::hours(h);
}

constexpr std::chrono::minutes operator"" _min(unsigned long long min) {
    return std::chrono::minutes(min);
}

int main () {
    auto duration = 2_h + 30_min;

    std::cout << "Total duration in minutes: " << std::chrono::duration_cast<std::chrono::minutes>(duration).count() << " minutes" << std::endl;

    auto duration2 = 3_h + 45_min;

    std::cout << "Total duration in minutes: " << std::chrono::duration_cast<timetaken>(duration2).count() << " minutes" << std::endl;
}