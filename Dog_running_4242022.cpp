#include <iostream>
using namespace std;
int main()
{
    int T=0;
    int P_person=0;
    int P_dog=52;
    bool Catched=false;
    while (Catched == false) {
        if (T % 2 == 1) {
            P_dog +=3;
        } else {
            P_dog+=0;
        }
        
        P_person += 5;
        if (P_person >= P_dog) {
            std::cout << P_dog << " | " << P_person << "\n";    
        } else {
            Catched = true;
        }
        
    }
    
}
