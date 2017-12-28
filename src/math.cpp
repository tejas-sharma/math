#include "math.h"

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
      remainder = a % b;
    }
    return b;
  }
}
