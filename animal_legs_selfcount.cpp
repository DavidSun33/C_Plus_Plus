
#include <iostream>

int main()
{
    int none=1;
    int ntwo=34;
    while (none!=35) {
        std::cout << none << "  " << ntwo << "  " << none*4+ntwo*2 << "\n";
        ntwo-=1;
        none++;
        
    }
}

