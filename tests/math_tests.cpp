#include "catch_main.hpp"
#include "catch.hpp"
#include "math.h"

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
