
#include <iostream>

int main()
{
    int grade
    
    std::cout<<"Enter grade.\n";
    std::cin >> grade;
    switch (grade) {
        
        case (grade < 6):
            std::cout << "Elementary student\n";
            break;
        case (grade = 6 or grade < 8):
            std::cout << "Junior High student\n";
            break;
        case (grade = 8 or grade < 13):
            std::cout << "High School student\n";
            break;
        else:
            std::cout << "NA\n";
            break;
    }

}

