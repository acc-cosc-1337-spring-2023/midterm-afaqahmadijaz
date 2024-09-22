#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "question3.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("test")
{
	REQUIRE(test_config() == true);
}

TEST_CASE("Test case 1") {
    int cookies = 48;
    double sugar_per_cookie = 1.5;
    double butter_per_cookie = 1.0;
    double flour_per_cookie = 2.75;
    double expected_sugar = 72.0;
    double expected_butter = 48.0;
    double expected_flour = 132.0;

    double actual_sugar, actual_butter, actual_flour;
    calculate_ingredients(cookies, sugar_per_cookie, butter_per_cookie, flour_per_cookie, actual_sugar, actual_butter, actual_flour);

    REQUIRE(actual_sugar == expected_sugar);
    REQUIRE(actual_butter == expected_butter);
    REQUIRE(actual_flour == expected_flour);
}

TEST_CASE("Test case 2") {
    int cookies = 96;
    double sugar_per_cookie = 3.0;
    double butter_per_cookie = 2.0;
    double flour_per_cookie = 5.5;
    double expected_sugar = 288.0;
    double expected_butter = 192.0;
    double expected_flour = 528.0;

    double actual_sugar, actual_butter, actual_flour;
    calculate_ingredients(cookies, sugar_per_cookie, butter_per_cookie, flour_per_cookie, actual_sugar, actual_butter, actual_flour);

    REQUIRE(actual_sugar == expected_sugar);
    REQUIRE(actual_butter == expected_butter);
    REQUIRE(actual_flour == expected_flour);
}

TEST_CASE("Test case 3") {
    int cookies = 24;
    double sugar_per_cookie = 0.75;
    double butter_per_cookie = 0.5;
    double flour_per_cookie = 1.375;
    double expected_sugar = 18.0;
    double expected_butter = 12.0;
    double expected_flour = 33.0;

    double actual_sugar, actual_butter, actual_flour;
    calculate_ingredients(cookies, sugar_per_cookie, butter_per_cookie, flour_per_cookie, actual_sugar, actual_butter, actual_flour);

    REQUIRE(actual_sugar == expected_sugar);
    REQUIRE(actual_butter == expected_butter);
    REQUIRE(actual_flour == expected_flour);
}