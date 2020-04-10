#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"
#include <iostream>
#include <string>
using std::cout; using std::string; using std::cin; 
int main() 
{
	char choice = 'y';
	TicTacToeManager game_manager;
	do {
		string first_player;
		cout << "First Player select X or O\n";
		cin >> first_player;
		while (first_player != "X" && first_player != "O")
		{
			cout << "Must be X or O\n";
			cin >> first_player;
		}
		TicTacToe game;
		game.start_game(first_player);
		do
		{
			cin >> game;
			try
			{
				
				cout << game;
			}
			catch (Error e)
			{
				cout << e.get_message() << "\n";
			}
			

		} while (!game.game_over());
		
		game_manager.save_game(game);
		cout << game_manager;
		cout <<  "winner is: " <<game.get_winner();
		
		cout << "Press y to play again";
		cin >> choice;

		




	}while (choice == 'y');
	
	
	return 0;
}