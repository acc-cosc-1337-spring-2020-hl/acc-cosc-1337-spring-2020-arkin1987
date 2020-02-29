//cpp
#include "tic_tac_toe.h"

void TicTacToe::start_game(std::string first_player)
{
	if (first_player == "X" || first_player == "O")
	{
		return first_player;
	}
	else
	{
		throw Error("Player must be X or O") 
	}
	player = first_player;
}

void TicTacToe::mark_board(int position)
{
	if (position >= 1 && position <= 9)
	{
		return position;
	}
	else
	{
		throw Error("Postion must be 1-9")
	}
}

std::string TicTacToe::get_player() const
{
	return std::string(player);
}

void TicTacToe::set_next_player()
{
	if (player == "X")
	{
		return "O";
	}
	else
	{
		return "X";
	}
}
