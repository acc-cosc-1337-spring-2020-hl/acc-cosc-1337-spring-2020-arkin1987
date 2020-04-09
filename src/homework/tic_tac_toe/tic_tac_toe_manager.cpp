//cpp
#include "tic_tac_toe_manager.h"


void TicTacToeManager::save_game(const TicTacToe g)
{
	games.push_back(g);
	
	
}

void TicTacToeManager::update_winner_count(string winner)
{
	if (winner == "X")
	{
		x_win++;
	}
	else if (winner == "O")
	{
		o_win++;
	}
	else if (winner == "C")
	{
		ties++;
	}
}

std::ostream& operator<<(std::ostream& out, const TicTacToeManager& manager)
{
	for (auto &vec_holder : manager.games)
	{
		out << vec_holder;
	}
	return out;
	
}
