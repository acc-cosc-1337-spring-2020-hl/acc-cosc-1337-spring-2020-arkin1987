#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "tic_tac_toe.h"
#include "tic_tac_toe_3.h"
#include<functional>
#include <tic_tac_toe_4.h>
using std::unique_ptr; using std::make_unique;

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test can’t call mark board before start game")
{

	TicTacToe3 game;
	REQUIRE_THROWS_AS(game.mark_board(1), Error);
}

TEST_CASE("Test start game accepts only X or O")
{

	TicTacToe3 game;
	REQUIRE_THROWS_AS(game.start_game("Y"), Error);
}

TEST_CASE("Test set first player to X")
{

	TicTacToe3 game;
	game.start_game("X");

	REQUIRE(game.get_player() == "X");
}

TEST_CASE("Test set first player to O")
{

	TicTacToe3 game;
	game.start_game("O");

	REQUIRE(game.get_player() == "O");
}

TEST_CASE("Test start game with X game flow")
{

	TicTacToe3 game;
	game.start_game("X");
	REQUIRE(game.get_player() == "X");

	game.mark_board(4);
	REQUIRE(game.get_player() == "O");
}

TEST_CASE("Test win by first column", "[X wins first column]")
{
	unique_ptr<TicTacToe> board = make_unique <TicTacToe3>();

	board->start_game("X");
	REQUIRE(board->game_over() == false);
	board->mark_board(1);//X         
	REQUIRE(board->game_over() == false);
	board->mark_board(2);//O          
	REQUIRE(board->game_over() == false);
	board->mark_board(4);//X          
	REQUIRE(board->game_over() == false);
	board->mark_board(5);//O          
	REQUIRE(board->game_over() == false);
	board->mark_board(7);//X 
	//X wins 
	REQUIRE(board->game_over() == true);
}

TEST_CASE("Test win by second column", "[X wins second column]")
{
	unique_ptr<TicTacToe> board = make_unique <TicTacToe3>();

	board->start_game("X");
	REQUIRE(board->game_over() == false);
	board->mark_board(2);//X         
	REQUIRE(board->game_over() == false);
	board->mark_board(1);//O          
	REQUIRE(board->game_over() == false);
	board->mark_board(5);//X          
	REQUIRE(board->game_over() == false);
	board->mark_board(4);//O          
	REQUIRE(board->game_over() == false);
	board->mark_board(8);//X 
	//X wins 
	REQUIRE(board->game_over() == true);
}

TEST_CASE("Test win by third column", "[X wins third column]")
{
	unique_ptr<TicTacToe> board = make_unique <TicTacToe3>();

	board->start_game("X");
	REQUIRE(board->game_over() == false);
	board->mark_board(3);//X         
	REQUIRE(board->game_over() == false);
	board->mark_board(1);//O          
	REQUIRE(board->game_over() == false);
	board->mark_board(6);//X          
	REQUIRE(board->game_over() == false);
	board->mark_board(4);//O          
	REQUIRE(board->game_over() == false);
	board->mark_board(9);//X 
	//X wins 
	REQUIRE(board->game_over() == true);
}

TEST_CASE("Test win by first row", "[X wins first row]")
{
	unique_ptr<TicTacToe> board = make_unique <TicTacToe3>();

	board->start_game("X");
	REQUIRE(board->game_over() == false);
	board->mark_board(1);//X         
	REQUIRE(board->game_over() == false);
	board->mark_board(4);//O          
	REQUIRE(board->game_over() == false);
	board->mark_board(2);//X          
	REQUIRE(board->game_over() == false);
	board->mark_board(5);//O          
	REQUIRE(board->game_over() == false);
	board->mark_board(3);//X 
	//X wins 
	REQUIRE(board->game_over() == true);
}

TEST_CASE("Test win by second row", "[X wins second row]")
{
	unique_ptr<TicTacToe> board = make_unique <TicTacToe3>();

	board->start_game("X");
	REQUIRE(board->game_over() == false);
	board->mark_board(4);//X         
	REQUIRE(board->game_over() == false);
	board->mark_board(2);//O          
	REQUIRE(board->game_over() == false);
	board->mark_board(5);//X          
	REQUIRE(board->game_over() == false);
	board->mark_board(1);//O          
	REQUIRE(board->game_over() == false);
	board->mark_board(6);//X 
	//X wins 
	REQUIRE(board->game_over() == true);
}

TEST_CASE("Test win by third row", "[X wins third row]")
{
	unique_ptr<TicTacToe> board = make_unique <TicTacToe3>();

	board->start_game("X");
	REQUIRE(board->game_over() == false);
	board->mark_board(7);//X         
	REQUIRE(board->game_over() == false);
	board->mark_board(4);//O          
	REQUIRE(board->game_over() == false);
	board->mark_board(8);//X          
	REQUIRE(board->game_over() == false);
	board->mark_board(5);//O          
	REQUIRE(board->game_over() == false);
	board->mark_board(9);//X 
	//X wins 
	REQUIRE(board->game_over() == true);
}

TEST_CASE("Test win diagonal 1", "[X wins with 1 5 9]")
{
	unique_ptr<TicTacToe> board = make_unique <TicTacToe3>();

	board->start_game("X");
	REQUIRE(board->game_over() == false);
	board->mark_board(1);//X         
	REQUIRE(board->game_over() == false);
	board->mark_board(4);//O          
	REQUIRE(board->game_over() == false);
	board->mark_board(5);//X          
	REQUIRE(board->game_over() == false);
	board->mark_board(3);//O          
	REQUIRE(board->game_over() == false);
	board->mark_board(9);//X 
	//X wins 
	REQUIRE(board->game_over() == true);
}

TEST_CASE("Test win diagonal 2", "[X wins with 3 5 7]")
{
	unique_ptr<TicTacToe> board = make_unique <TicTacToe3>();

	board->start_game("X");
	REQUIRE(board->game_over() == false);
	board->mark_board(3);//X         
	REQUIRE(board->game_over() == false);
	board->mark_board(4);//O          
	REQUIRE(board->game_over() == false);
	board->mark_board(5);//X          
	REQUIRE(board->game_over() == false);
	board->mark_board(1);//O          
	REQUIRE(board->game_over() == false);
	board->mark_board(7);//X 
	//X wins 
	REQUIRE(board->game_over() == true);
	REQUIRE(board->get_winner() == "X");
}

TEST_CASE("Test tie")
{
	unique_ptr<TicTacToe> board = make_unique <TicTacToe3>();

	board->start_game("X");
	REQUIRE(board->game_over() == false);
	board->mark_board(1);//X         
	REQUIRE(board->game_over() == false);
	board->mark_board(2);//O          
	REQUIRE(board->game_over() == false);
	board->mark_board(4);//X          
	REQUIRE(board->game_over() == false);
	board->mark_board(7);//O          
	REQUIRE(board->game_over() == false);
	board->mark_board(5);//X 
	REQUIRE(board->game_over() == false);
	board->mark_board(6);//O 
	REQUIRE(board->game_over() == false);
	board->mark_board(3);//X 
	REQUIRE(board->game_over() == false);
	board->mark_board(9);//O 
	REQUIRE(board->game_over() == false);
	board->mark_board(8);//X 
	//no winner
	REQUIRE(board->game_over() == true);
	REQUIRE(board->get_winner() == "C");
}

// 4X4 TicTacToe
TEST_CASE("Check top left to bottom right diagional win")
{
	unique_ptr<TicTacToe> board = make_unique <TicTacToe4>();

	board->start_game("X");

	board->mark_board(1);//X
	REQUIRE(board->game_over() == false);
	board->mark_board(2);//O
	REQUIRE(board->game_over() == false);
	board->mark_board(6);//X
	REQUIRE(board->game_over() == false);
	board->mark_board(4);//O
	REQUIRE(board->game_over() == false);
	board->mark_board(11);//X
	REQUIRE(board->game_over() == false);
	board->mark_board(14);//O
	REQUIRE(board->game_over() == false);
	board->mark_board(16);//X


	REQUIRE(board->game_over() == true);
	REQUIRE(board->get_winner() == "X");
}

TEST_CASE("Check top right to bottom left diagional win")
{
	unique_ptr<TicTacToe> board = make_unique <TicTacToe4>();

	board->start_game("X");

	board->mark_board(4);//X
	REQUIRE(board->game_over() == false);
	board->mark_board(2);//O
	REQUIRE(board->game_over() == false);
	board->mark_board(7);//X
	REQUIRE(board->game_over() == false);
	board->mark_board(5);//O
	REQUIRE(board->game_over() == false);
	board->mark_board(10);//X
	REQUIRE(board->game_over() == false);
	board->mark_board(14);//O
	REQUIRE(board->game_over() == false);
	board->mark_board(13);//X


	REQUIRE(board->game_over() == true);
	REQUIRE(board->get_winner() == "X");
}

TEST_CASE("Check 1st column win")
{
	unique_ptr<TicTacToe> board = make_unique <TicTacToe4>();

	board->start_game("X");

	board->mark_board(1);//X
	REQUIRE(board->game_over() == false);
	board->mark_board(2);//O
	REQUIRE(board->game_over() == false);
	board->mark_board(5);//X
	REQUIRE(board->game_over() == false);
	board->mark_board(6);//O
	REQUIRE(board->game_over() == false);
	board->mark_board(9);//X
	REQUIRE(board->game_over() == false);
	board->mark_board(14);//O
	REQUIRE(board->game_over() == false);
	board->mark_board(13);//X


	REQUIRE(board->game_over() == true);
	REQUIRE(board->get_winner() == "X");
}

TEST_CASE("Check 1st row win")
{
	unique_ptr<TicTacToe> board = make_unique <TicTacToe4>();

	board->start_game("X");

	board->mark_board(1);//X
	REQUIRE(board->game_over() == false);
	board->mark_board(7);//O
	REQUIRE(board->game_over() == false);
	board->mark_board(2);//X
	REQUIRE(board->game_over() == false);
	board->mark_board(6);//O
	REQUIRE(board->game_over() == false);
	board->mark_board(3);//X
	REQUIRE(board->game_over() == false);
	board->mark_board(14);//O
	REQUIRE(board->game_over() == false);
	board->mark_board(4);//X


	REQUIRE(board->game_over() == true);
	REQUIRE(board->get_winner() == "X");
}
