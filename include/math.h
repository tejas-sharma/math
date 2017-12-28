#include <set>
namespace ts 
{
  int gcd(const int a, const int b);
  int raise(const int base, const int power);
  std::shared_ptr<std::vector<int> > prime_factors(const int num);
  std::shared_ptr<std::vector<int> > primes(const int max);
  bool is_prime(const int num);

}