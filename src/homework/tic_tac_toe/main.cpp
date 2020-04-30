#include "tic_tac_toe_manager.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"
#include<iostream>
#include<string>


using std::cout; using std::cin; using std::string;
using std::unique_ptr; using std::make_unique;

int main()
{
	char cont = 'y';
	TicTacToeData data;
	unique_ptr <TicTacToeManager> manager = make_unique<TicTacToeManager>(data);
	string player;
	int game_type;
	

	do
	{

		cout << "\nInput 3 for 3X3 or 4 for 4X4 TicTacToe" << "\n";
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

		cout << "Enter X or O" << "\n";
		cin >> player;


		game->start_game(player);

		while (game->game_over() == false)
		{
			cin >> *game;
			cout << *game;
		}
		manager->save_game(game);

		cout << "\nGame over" << "\n";

		cout << "y to play again";
		cin >> cont;

	} while (cont == 'y');

	
	cout << *manager;

	return 0;
}