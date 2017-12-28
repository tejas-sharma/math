#include "math.h"
#include <utility>
#include <map>

namespace ts 
{
  // Euclid's Algorithm i.e. gcd(a, b) == gcd(b, a % b)
  int gcd(int a, int b)
  {
    while (b != 0)
    {
      auto remainder = a % b;
      a = b;
      b = remainder;
    }
    return a;
  }

  int raise(int base, unsigned int power)
  {
    std::map<unsigned int, int> powers;
    powers.insert(std::make_pair(0u, base));
    powers.insert(std::make_pair(1u, base * base));
    for (unsigned int i = 2; i < power; ++i) 
    {
      powers.insert(std::make_pair(i, powers[i-1] * powers[i-1]));
    }

    int result = 1;
    unsigned int counter = 0;
    while (power) 
    {
      if (power & 1) 
      {
        result *= powers[counter];
      }
      counter++;
      power >>= 1;
    }

    return result;
  }
}
