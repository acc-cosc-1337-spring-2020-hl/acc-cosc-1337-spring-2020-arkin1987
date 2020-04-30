//cpp
#include "tic_tac_toe_manager.h"



TicTacToeManager::TicTacToeManager(TicTacToeData& d)
{
	games = d.get_games();
	for (int i = 0; i < games.size(); i++)
	{
		update_winner_count(games.at(i)->get_winner());
	}
}

void TicTacToeManager::save_game(std::unique_ptr<TicTacToe> &game)
{
	update_winner_count(game->get_winner());
	games.push_back(std::move(game));
	data.save_games(games);
}

void TicTacToeManager::update_winner_count(std::string winner)
{
	if (winner == "X")
	{
		x_wins++;
	}
	else if (winner == "O")
	{
		o_wins++;
	}
	else
	{
		ties++;
	}
}

std::ostream& operator<<(std::ostream& out, const TicTacToeManager& m)
{
	out << "\n";
	for (auto& game : m.games)
	{
		out << *game;
		out << "Winner of last game: " <<game->get_winner() << "\n";
	}
	out << "Win History";
	out << "\nO wins: " << m.o_wins << "\n";
	out << "X wins: " << m.x_wins << "\n";
	out << "Ties: " << m.ties << "\n";

	return out;
}