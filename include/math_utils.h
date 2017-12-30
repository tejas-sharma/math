#include <vector>
#include <memory>

namespace ts 
{
  int gcd(int a, int b);
  int raise(int base, unsigned int power);
  std::shared_ptr<std::vector<int> > prime_factors(int num);
  template <size_t Max>
  std::shared_ptr<std::vector<int> > primes();
  bool is_prime(const int num);
}

#include "math_utils.tpp"
