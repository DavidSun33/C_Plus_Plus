#include <iostream>

using namespace std;

int main () {
  int x = 0;
  std::cout << "gimme the max because you used this\n";
  std::cin >> x;
  x += 1;
  for (int y = 0; y < x; y++)
    {
      for (int z = 0; z < y; z++)
	{
	  std::cout << "*";
	}

      std::cout << "\n";
    }

  return 0;

}

