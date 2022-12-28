/*
8、A snail is climbing a wall. Each day, it climbs 4 meters, but falls down 2 meters at night. If the wall's height is 18 meters, please calculate how many days are needed for the snail to climb the wall?
*/
#include <iostream>

using namespace std;

int main()
{
    int T=1;
    int D1=0;
    int D2=0;
    std::cout << "T      D1  D2 \n";
    for (int j=0;j<8;j++) {
        D1 = D2+4;
        D2 = D2+2;
        std::cout <<"t=  " << T << " | " << D1 << " | " << D2 << "\n";
        T += 1;
    }
}

