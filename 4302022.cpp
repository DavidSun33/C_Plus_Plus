#include <iostream>

using namespace std;

int main ()
{
  int i = 1;
  while (i % 3 != 0 && i % 4 != 0 && i % 7 != 0 && i % 9 != 0)
    {
      std::cout << i;
      i += 1;
    }
}

