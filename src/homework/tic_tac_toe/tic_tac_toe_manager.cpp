//cpp
#include "tic_tac_toe_manager.h"

void TicTacToeManager::save_game( TicTacToe b)
{
	games.push_back(b);
	update_winner_count(b.get_winner());
}

void TicTacToeManager::update_winner_count(string winner)
{
	if (winner == "X") {
		x_win++;
	}
	else if (winner == "O") {
		o_win++;
	}
	else if (winner == "C") {
		ties++;
	}
}

std::ostream& operator<<(std::ostream& out, TicTacToeManager& manager)
{
	
	for (auto &game : manager.games) {
		
		out << "winner: " << game.get_winner() << "\n";
	}
	
	

	out << "X Win Count: " << manager.x_win << "\n";
	out << "O Win Count: " << manager.o_win << "\n";
	out << "Tie Count: " << manager.ties << "\n";
	return out;
}