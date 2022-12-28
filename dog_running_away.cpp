#include <iostream>
using namespace std;
int main () {
  int i=1;
  int distance=8;
  for (i=1;i<100;i++)
    {
        if (distance<51) {
            std::cout << "Time: " << i << "  Dog: " << i*5 << "  You: " << i*3 << "  Distance: " << distance << "\n";
            distance = i*8+8;
        } else {
            std::cout << "Time: " << i << "  Dog: " << i*5 << "  You: " << i*3 << "  Distance: " << distance << "\n";
            std::cout << "SNAP! Line has broke.";
            return 0;
        }
    }
}






