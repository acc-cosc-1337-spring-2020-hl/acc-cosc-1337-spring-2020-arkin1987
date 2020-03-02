//cpp
#include "tic_tac_toe.h"

void TicTacToe::start_game(std::string first_player)
{
	if (first_player == "X" || first_player == "O")
	{
		first_player;
	}
	else
	{
		throw Error("Player must be X or O\n");
	}
	player = first_player;
}

void TicTacToe::mark_board(int position)
{
	if (position >= 1 && position <= 9)
	{
		position;
	}
	else
	{
		throw Error("Postion must be 1-9\n");
	}
	if (player == "")
	{
		throw Error("Must start game first\n");
	}
	else
	{
		set_next_player(player);// call set_next_player
	}
}



void TicTacToe::set_next_player(std::string player)
{
	if (player == "X")
	{
		"O";
	}
	else
	{
		"X";
	}
}

