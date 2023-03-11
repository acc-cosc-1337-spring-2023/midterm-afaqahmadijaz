#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "question4.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("test")
{
	REQUIRE(test_config() == true);
}

TEST_CASE("Convert binary number 00001010 to decimal") {
    int decimal = binaryToDecimal(0b00001010);
    REQUIRE(decimal == 10);
}

TEST_CASE("Convert binary number 10101010 to decimal") {
    int decimal = binaryToDecimal(0b10101010);
    REQUIRE(decimal == 170);
}

TEST_CASE("Convert binary number 11111111 to decimal") {
    int decimal = binaryToDecimal(0b11111111);
    REQUIRE(decimal == 255);
}

TEST_CASE("Convert binary number 00000000 to decimal") {
    int decimal = binaryToDecimal(0b00000000);
    REQUIRE(decimal == 0);
}

TEST_CASE("Convert binary number 10000000 to decimal") {
    int decimal = binaryToDecimal(0b10000000);
    REQUIRE(decimal == 128);
}

TEST_CASE("Convert binary number 01111111 to decimal") {
    int decimal = binaryToDecimal(0b01111111);
    REQUIRE(decimal == 127);
}