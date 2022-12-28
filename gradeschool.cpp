
#include <iostream>
using namespace std;

int main()
{
    int grade;
    
    std::cout<<"Enter grade.\n";
    std::cin >> grade;
    switch (grade) {
        
        case (1):
            std::cout << "Elementary student\n";
            break;
        case (2):
            std::cout << "Elementary student\n";
            break;
        case (3):
            std::cout << "Elementary student\n";
            break;
        case (4):
            std::cout << "Elementary student\n";
            break;        
        case (5):
            std::cout << "Elementary student\n";
            break;        
        case (6):
            std::cout << "Elementary student\n";
            break;
        case (7):
            std::cout << "Junior High student\n";
            break;
        case (8):
            std::cout << "Junior High student\n";
            break;
        case (9):
            std::cout << "High School student\n";
            break;
        case (10):
            std::cout << "High School student\n";
            break;
        case (11):
            std::cout << "High School student\n";
            break;
        case (12):
            std::cout << "High School student\n";
            break;
        default:
            std::cout << "NA, you are too old then.\n";
            break;
    }

}

