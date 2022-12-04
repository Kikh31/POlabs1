#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN

#include "doctest.h"

double plus(double x, double y) {
    return x + y;
}

double brokePlus(double x, double y) {
    return x + y + 1;
}

double minus(double x, double y) {
    return x - y;
}

double multiply(double x, double y) {
    return x * y;
}

double divide(double x, double y) {
    return x / y;
}

TEST_CASE("plus test") {
    SUBCASE("++") CHECK(plus(1, 1) == 2);
    SUBCASE("--") CHECK(plus(-1, -1) == -2);
    SUBCASE("+-") CHECK(plus(1, -1) == 0);
    SUBCASE("-+") CHECK(plus(-1, 1) == 0);
    //SUBCASE("broke") CHECK(brokePlus(1, 1) == 2);
}

TEST_CASE("minus test") {
    SUBCASE("++") CHECK(minus(1, 1) == 0);
    SUBCASE("--") CHECK(minus(-1, -1) == 0);
    SUBCASE("+-") CHECK(minus(1, -1) == 2);
    SUBCASE("-+") CHECK(minus(-1, 1) == -2);
}

TEST_CASE("multiply test") {
    SUBCASE("++") CHECK(multiply(2, 2) == 4);
    SUBCASE("--") CHECK(multiply(-2, -2) == 4);
    SUBCASE("+-") CHECK(multiply(2, -2) == -4);
    SUBCASE("-+") CHECK(multiply(-2, 2) == -4);
}

TEST_CASE("divide test") {
    SUBCASE("++") CHECK(divide(2, 2) == 1);
    SUBCASE("--") CHECK(divide(-2, -2) == 1);
    SUBCASE("+-") CHECK(divide(2, -2) == -1);
    SUBCASE("-+") CHECK(divide(-2, 2) == -1);
}