#include "math_utils.h"
#include "random_utils.h"
#include <cmath>
#include <utility>
#include <array>
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

  std::shared_ptr<std::vector<int> > prime_factors(int num)
  {
    std::shared_ptr<std::vector<int> > factors {std::make_shared<std::vector<int> >()};
    while (num % 2 == 0) 
    {
      factors->push_back(2);
      num = num / 2;
    }
    unsigned int currentFactor = 3;
    while (currentFactor <= static_cast<int>(std::sqrt(num)))
    {
      while (num % currentFactor == 0) 
      {
        factors->push_back(currentFactor);
        num = num / currentFactor;
      }
      currentFactor += 2;
    }
    if (num > 1) factors->push_back(num);
    return factors;
  }

  bool is_prime(const int num)
  {
    randomize();
    static const unsigned int NumTests = 2;
    for (unsigned int test = 0; test < NumTests; ++test)
    {
      int rando = pick(1, num-1);
      if ((ts::raise(rando, num-1) % num) != 1) return false;
    }
    return true;
  }
}
