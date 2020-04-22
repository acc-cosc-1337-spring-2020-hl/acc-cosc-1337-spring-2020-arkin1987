#include "tic_tac_toe_manager.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"
#include<iostream>
#include<functional>


using std::cout; using std::cin; using std::string;
using std::unique_ptr; using std::make_unique;
int main()
{
	unique_ptr <TicTacToeManager> manager = make_unique<TicTacToeManager>();
	string cont;
	std::vector<unique_ptr<TicTacToe>> games;

	do
	{
		int game_type;
		cout << "\nTictactoe 3 or 4?";
		cin >> game_type;
		unique_ptr<TicTacToe> game;

		if (game_type == 3)
		{
			game = make_unique<TicTacToe3>();
		}
		else
		{
			game = make_unique<TicTacToe4>();
		}

		

		string player = "Y";

		while (!(player == "O" || player == "X"))
		{
			try
			{
				cout << "Enter player: ";
				cin >> player;

				game->start_game(player);
			}
			catch (Error e)
			{
				cout << e.get_message();
			}
		}

		int choice = 1;

		do
		{
			try
			{
				cin >> *game;
				cout << *game;
			}
			catch (Error e)
			{
				cout << e.get_message();
			}

		} while (!game->game_over());

		manager->save_game(game);

		cout << "\nWinner: " << game->get_winner() << "\n";

		cout << "Enter Y to play again: ";
		cin >> cont;

	} while (cont == "Y");

	cout << *manager;

	return 0;
}