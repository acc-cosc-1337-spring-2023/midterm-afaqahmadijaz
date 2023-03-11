#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "question1.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("test")
{
	REQUIRE(test_config() == true);
}

TEST_CASE("Test Fibonacci function") {
    REQUIRE(fibonacci(0) == 0);
    REQUIRE(fibonacci(1) == 1);
    REQUIRE(fibonacci(2) == 1);
    REQUIRE(fibonacci(3) == 2);
    REQUIRE(fibonacci(4) == 3);
    REQUIRE(fibonacci(5) == 5);
    REQUIRE(fibonacci(6) == 8);
    REQUIRE(fibonacci(7) == 13);
    REQUIRE(fibonacci(8) == 21);
}

TEST_CASE("Test is_palindrome function") {
    REQUIRE(is_palindrome("abcba") == true);
    REQUIRE(is_palindrome("abc") == false);
    REQUIRE(is_palindrome("hannah") == true);
    REQUIRE(is_palindrome("hanna") == false);
}