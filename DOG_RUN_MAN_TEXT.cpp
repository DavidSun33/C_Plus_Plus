
#include <iostream>

using namespace std;

int main()
{
    int i=1;
    while (i*5-i*3<=52) {
        std::cout << "SECONDS- " << i << "      " << "DOG- " << i*5 << " meters     " << "MAN- " << i*3 << " meters     The man and the dog are " << i*5-i*3 << " meters apart.\n\n";
        i++;
    }
    std::cout << "* The leash broke. Run to play again. *";
}
