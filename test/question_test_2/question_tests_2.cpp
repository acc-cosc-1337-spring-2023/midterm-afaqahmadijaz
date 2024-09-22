#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "question2.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("test")
{
	REQUIRE(test_config() == true);
}
TEST_CASE("Test case 1: 1570846218", "[get_hours][get_minutes][get_seconds]") {
    Time t(1570846218);
    REQUIRE(t.get_hours() == 2);
    REQUIRE(t.get_minutes() == 10);
    REQUIRE(t.get_seconds() == 18);
}

TEST_CASE("Test case 2: 1570875018", "[get_hours][get_minutes][get_seconds]") {
    Time t(1570875018);
    REQUIRE(t.get_hours() == 10);
    REQUIRE(t.get_minutes() == 10);
    REQUIRE(t.get_seconds() == 18);
}