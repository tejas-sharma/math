#include "catch_main.hpp"
#include "catch.hpp"
#include "math_utils.h"

TEST_CASE("GCD is accurately computed", "[gcd]") 
{
  REQUIRE(ts::gcd(4,16) == 4);
  REQUIRE(ts::gcd(27,16) == 1);
  REQUIRE(ts::gcd(16,4) == 4);
  REQUIRE(ts::gcd(64, 48) == 16);
  REQUIRE(ts::gcd(0,5) == 5);
  REQUIRE(ts::gcd(5,0) == 5);
  REQUIRE(ts::gcd(0,0) == 0);
}

TEST_CASE("Exponents are accurately computed", "[raise]")
{
  REQUIRE(ts::raise(5,1) == 5);
  REQUIRE(ts::raise(5,0) == 1);
  REQUIRE(ts::raise(5,5) == 3125);
  REQUIRE(ts::raise(5,4) == 625);
  REQUIRE(ts::raise(-5,3) == -125);
  REQUIRE(ts::raise(-5,4) == 625);
}

TEST_CASE("Prime factors are computed accurately", "[prime_factors]")
{
  REQUIRE(*(ts::prime_factors(2)) == std::vector<int>{2});
  REQUIRE(*(ts::prime_factors(6)) == std::vector<int>{2,3});
  REQUIRE(*(ts::prime_factors(16)) == std::vector<int>{2,2,2,2});
  REQUIRE(*(ts::prime_factors(15)) == std::vector<int>{3,5});
  REQUIRE(*(ts::prime_factors(34)) == std::vector<int>{2,17});
}

TEST_CASE("Primes are computed accurately", "[primes]")
{
  REQUIRE(*(ts::primes<2>()) == std::vector<int>{2});
  REQUIRE(*(ts::primes<6>()) == std::vector<int>{2,3,5});
  REQUIRE(*(ts::primes<17>()) == std::vector<int>{2,3,5,7,11,13,17});
  REQUIRE(*(ts::primes<1>()) == std::vector<int>{});
}

TEST_CASE("Accurately checks whether a number is prime", "[is_prime]")
{
  REQUIRE(ts::is_prime(3));
  REQUIRE(ts::is_prime(11));
  REQUIRE(!ts::is_prime(6));
  REQUIRE(!ts::is_prime(1));
}
