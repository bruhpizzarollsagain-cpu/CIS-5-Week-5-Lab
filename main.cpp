#include <iostream>

// Lab 5 — Mason Ayala
// CIS 5 Week 05 · Eligibility check

int main() {
    int age = 0;
    double gpa = 0.0;

    std::cout << "Age?: ";
    std::cin >> age;

    std::cout << "GPA? ";
    std::cin >> gpa;
    bool adult = age >= 18;
    bool honors = gpa >= 3.5;
    // I chose 18 for adulthood and 3.5 for honors because they are the assignment thresholds.
    if (adult && honors) {
        std::cout << "Eligible for the honors program.\n";
    }
    else if (adult || honors) {
        std::cout << "One requirement met.\n";
    }
    else {
        std::cout << "Not eligible yet.\n";
    }

    return 0;
}
