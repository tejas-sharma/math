#include <vector>
#include <memory>
#include <cmath>
#include <array>

namespace ts
{
  template <size_t Max>
  std::shared_ptr<std::vector<int> > primes()
  {
    std::shared_ptr<std::vector<int> > primes { std::make_shared<std::vector<int> >()};
    std::array<bool, Max+1> composites;
    composites.fill(false);
    for (unsigned int i = 4; i <= Max; i+=2) 
    {
      composites[i] = true;
    }
    for (unsigned int i = 3; i <= Max; i+=2) 
    {
      if (!composites[i]) 
      {
        unsigned int j = 3;
        unsigned int k = i * j;
        while (k <= Max) 
        {
          composites[k] = true;
          k*=(++j);
        }
      }
    }
    for (unsigned int i = 2; i < composites.size(); ++i)
    {
      if (!composites[i]) primes->push_back(i);
    }
    return primes;
  }
}
