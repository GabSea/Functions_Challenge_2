//
// Created by CSStudent on 9/1/2026.
//

#ifndef GRADES_H
#define GRADES_H
#include <iostream>

void inputGrades(double &g1, double &g2, double &g3) {
    std::cout << "Updating grades...\nEnter the first grade: ";
    std::cin >> g1;
    std::cout << "Enter the second grade: ";
    std::cin >> g2;
    std::cout << "Enter the third grade: ";
    std::cin >> g3;

    // i wont limit 100+ cause extra credit *techincally* exists
    if (g1 < 0) {g1 = 0;}
    if (g2 < 0) {g2 = 0;}
    if (g3 < 0) {g3 = 0;}
}

double calculateAverage(const double grade1, const double grade2, const double grade3) {
    double average = (grade1 + grade2 + grade3) / 3;
    return average;
}

char getLetterGrade(const double average) {
    // Uses standard grading scale

    if (average >= 90) {return 'A';}
    else if (average >= 80) {return 'B';}
    else if (average >= 70) {return 'C';}
    else if (average >= 60) {return 'D';}
    else {return 'F';}
}

#endif //GRADES_H
