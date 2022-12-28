#include <iostream>

using namespace std;

int main()
{
    int num = 0;
    int all = 0;
    std::cout << "NEW UPDATE: TRY IT FOR YOURSELF\n";
    std::cout << "How many cows are there? A cow has four legs.\n";
    std::cin >> num;
    std::cout << "\n";
    std::cout << "You have " << num*4 << " cow legs to kick you.\n";
    all+=num*4;
    std::cout << "\n";
    std::cout << "How many ducks are there? A duck has two legs.\n";
    std::cin >> num;
    std::cout << "\n";
    std::cout << "You have " << num*2 << " duck legs to kick you.\n";
    all+=num*2;
    std::cout << "\n";
    std::cout << "How many chickens are there? A chicken has two legs.\n";
    std::cin >> num;
    std::cout << "\n";
    std::cout << "You have " << num*2 << " chicken legs to kick you. THIS PROJECT IS NOT DONE!!! Wait five seconds, please.\n";
    all+=num*2;
    std::cout << "\n" << "You have in total " << all << " legs to kick you. Fare well with the kicking!\n";
    for (int count=0;count<all;count++) {
        std::cout << "OOF. \n";
    }
    
}
