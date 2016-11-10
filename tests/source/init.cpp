#include <catch.hpp>
#include <func.hpp>

SCENARIO ("summa","[sum]"){
    double rv = sum;
      REQUIRE (rv == 0.901499)
}
