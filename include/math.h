#include <vector>
#include <memory>

namespace ts 
{
  int gcd(int a, int b);
  int raise(const int base, const int power);
  std::shared_ptr<std::vector<int> > prime_factors(const int num);
  std::shared_ptr<std::vector<int> > primes(const int max);
  bool is_prime(const int num);
}
