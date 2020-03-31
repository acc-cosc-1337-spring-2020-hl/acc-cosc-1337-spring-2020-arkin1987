#include "tic_tac_toe.h"
#include <iostream>
#include <string>
using std::cout; using std::string; using std::cin; 
int main() 
{
	char choice = 'y';
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
			cout << "choose position 1-9\n";
			int position;
			cin >> position;
			try
			{
				game.mark_board(position);
				game.display_board();
			}
			catch (Error e)
			{
				cout << e.get_message() << "\n";
			}

		} while (!game.game_over());
		
		
		
		
		cout << "Press y to play again";
		cin >> choice;

		




	}while (choice == 'y');
	
	
	return 0;
}