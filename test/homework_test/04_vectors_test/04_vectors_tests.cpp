#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "vectors.h"
TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test function is_prime") {
	
	REQUIRE(is_prime(2) == true);
	REQUIRE(is_prime(4) == false);
	REQUIRE(is_prime(43) == true);
	REQUIRE(is_prime(44) == false);
	REQUIRE(is_prime(8) == false);
}

TEST_CASE("Test function get_max_from_vector") {
	vector <int> nums1{ 3,8,1,99,1000 };
	REQUIRE(get_max_from_vector(nums1) == 1000);

	vector <int> nums2{ 15,12,11,99,88 };
	REQUIRE(get_max_from_vector(nums2) == 99);

	vector <int> nums3{ 150,120,11,990,88888 };
	REQUIRE(get_max_from_vector(nums3) == 88888);


}
TEST_CASE("Test function vector_of_primes") {
	vector <int> nums1{ 2, 3, 5, 7 };
	REQUIRE(vector_of_primes(10) == nums1);

	vector <int> nums2{ 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47 };
	REQUIRE(vector_of_primes(50) == nums2);

}
TEST_CASE("Test function get_primes_from_vector") {
	vector <int> nums1{ 2, 3, 8, 10, 15, 16, 12, 18, 20 };
	vector <int> expected1{ 2, 3};
	REQUIRE(get_primes_from_vector(nums1) == expected1);

	vector <int> nums2{ 6, 2, 3, 5 };
	vector <int> expected2{ 2, 3, 5};
	REQUIRE(get_primes_from_vector(nums2) == expected2);

	vector <int> nums3{ 6, 8, 10 };
	vector <int> expected3{  };
	REQUIRE(get_primes_from_vector(nums3) == expected3);


}