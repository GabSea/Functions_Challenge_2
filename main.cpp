#include <iostream>

#include "grades.h"

double grade1 = 50.0, grade2 = 50.0, grade3 = 50.0;
int choice = -1;

int main() {

    do {
        std::cout << "Choose action: \n"
                     "1: Input grades\n"
                     "2: Calculate and display average\n"
                     "3: Assign & display letter grade\n"
                     "4: Quit" << std::endl;
        std::cin >> choice;

        switch (choice) {
            case 1: {
                inputGrades(grade1,grade2,grade3);
                break;
            }
            case 2: {
                std::cout << "Average numerical grade is: " << calculateAverage(grade1,grade2,grade3) << std::endl;
                break;
            }
            case 3: {
                std::cout << "You get a.. " << getLetterGrade(calculateAverage(grade1,grade2,grade3)) << std::endl;
                break;
            }
            case 4: {
                std::cout << "Bu-bye!" << std::endl;
                break;
            }
            default: {
                std::cout << "I dont know what this is man :<" << std::endl;
                choice = -1;
                break;
            }
        }

    } while (choice != 4);

    return 0;
}
