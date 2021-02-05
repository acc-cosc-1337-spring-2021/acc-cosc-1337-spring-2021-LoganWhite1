#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "types.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test sum_numbers function") 
{
	REQUIRE(sum_numbers(5, 5) == 10);
}

// Create an assertion to verify that calling the mulitply_numbers function works with parameter 10
int main()
{int num1 = 10;
assert(return == 50);
return 0;}

// Create an assertion to verify that calling the multiply_numbers fucntion with paratmeter 2
int main()
{int num1 = 2;
assert(return == 10);
return 0;}