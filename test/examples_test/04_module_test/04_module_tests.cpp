#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "bank_account.h"
TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test bank account get_balance") {
	
	BankAccount account(150);

	
	REQUIRE(account.get_balance() == 150);
}

TEST_CASE("Test bank account deposit") {

	BankAccount account(150);
	REQUIRE(account.get_balance() == 150);
	
	REQUIRE_THROWS_AS(account.deposit(-50), InvalidAmount);
	REQUIRE(account.get_balance() == 150);
	
	account.deposit(50);
	REQUIRE(account.get_balance() == 200);
}

TEST_CASE("Test bank account withdraw") {

	BankAccount account(150);
	REQUIRE(account.get_balance() == 150);

	

	REQUIRE_THROWS_AS(account.withdraw(-5), InvalidAmount);
	REQUIRE(account.get_balance() == 150);

	account.withdraw(50);
	REQUIRE(account.get_balance() == 100);

	REQUIRE_THROWS_AS(account.withdraw(101), InvalidAmount);
	REQUIRE(account.get_balance() == 100);

}
/*
TEST_CASE("Test default constructor") {

	BankAccount account;
	REQUIRE(account.get_balance() == 0);
}
TEST_CASE("Test default constructor initial depostit") {

	BankAccount account;
	REQUIRE(account.get_balance() == 0);
	account.open(25);
	REQUIRE(account.get_balance() == 25);
}
TEST_CASE("Test default constructor account already open") {
	BankAccount account(50);

	REQUIRE_THROWS_AS(account.open(25), InvalidAmount);

}
TEST_CASE("Test default constructor open account less than 25") {
	BankAccount account;
	REQUIRE_THROWS_AS(account.open(24), InvalidAmount);
}
*/