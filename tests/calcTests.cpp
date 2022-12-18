#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN

#include "doctest.h"
#include "../calc.h"


TEST_CASE("plus test") {
    SUBCASE("++") CHECK(cplus(1, 1) == 2);
    SUBCASE("--") CHECK(cplus(-1, -1) == -2);
    SUBCASE("+-") CHECK(cplus(1, -1) == 0);
    SUBCASE("-+") CHECK(cplus(-1, 1) == 0);
    //SUBCASE("broke") CHECK(cbrokePlus(1, 1) == 15);
}

TEST_CASE("minus test") {
    SUBCASE("++") CHECK(cminus(1, 1) == 0);
    SUBCASE("--") CHECK(cminus(-1, -1) == 0);
    SUBCASE("+-") CHECK(cminus(1, -1) == 2);
    SUBCASE("-+") CHECK(cminus(-1, 1) == -2);
}

TEST_CASE("multiply test") {
    SUBCASE("++") CHECK(cmultiply(2, 2) == 4);
    SUBCASE("--") CHECK(cmultiply(-2, -2) == 4);
    SUBCASE("+-") CHECK(cmultiply(2, -2) == -4);
    SUBCASE("-+") CHECK(cmultiply(-2, 2) == -4);
}

TEST_CASE("divide test") {
    SUBCASE("++") CHECK(cdivide(2, 2) == 1);
    SUBCASE("--") CHECK(cdivide(-2, -2) == 1);
    SUBCASE("+-") CHECK(cdivide(2, -2) == -1);
    SUBCASE("-+") CHECK(cdivide(-2, 2) == -1);
}
