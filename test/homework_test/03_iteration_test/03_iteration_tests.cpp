#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "dna.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test function get_reverse_string") {
	string dna1 = "AGCTATAG";
	string desired_result1 = "GATATCGA";
	
	string dna2 = "CGCTATAG";
	string desired_result2 = "GATATCGC";

	REQUIRE(get_reverse_string(dna1) == desired_result1);
	REQUIRE(get_reverse_string(dna2) == desired_result2);
}

TEST_CASE("Test function get_dna_complement") {
	string dna1 = "AAAACCCGGT";
	string desired_result1 = "ACCGGGTTTT";

	string dna2 = "CCCGGAAAAT";
	string desired_result2 = "ATTTTCCGGG";

	REQUIRE(get_dna_complement(dna1) == desired_result1);
	REQUIRE(get_dna_complement(dna2) == desired_result2);

}

TEST_CASE("Test function get_gc_content") {
	string dna1 = "AGCTATAG";
	double desired_result1 = .375;

	string dna2 = "CGCTATAG";
	double desired_result2 = .50;

	REQUIRE(get_gc_content(dna1) == desired_result1);
	REQUIRE(get_gc_content(dna2) == desired_result2);
}