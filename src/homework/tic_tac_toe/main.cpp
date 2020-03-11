#include "tic_tac_toe.h"
#include <iostream>
#include <string>
using std::cout; using std::string; using std::cin; 
int main() 
{
	string first_player;
	cout << "First Player select X or O\n";
	cin >> first_player;
	TicTacToe game;
	try 
	{
		game.start_game(first_player);
	}
	catch(Error e)
	{
		cout << e.get_message() << "\n";
	}
	
	char choice;
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



	return 0;
}