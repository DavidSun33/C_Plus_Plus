
#include <iostream>

using namespace std;

int main()
{
    int T=1;
    int D1=0;
    int D2=0;
    std::cout << "T      D1  D2 \n";
    for (int j=0;j<8;j++) {
        D1 = D2+3;
        D2 = D2+2;
        std::cout <<"t=  " << T << " | " << D1 << " | " << D2 << "\n";
        T += 1;
    }
}

