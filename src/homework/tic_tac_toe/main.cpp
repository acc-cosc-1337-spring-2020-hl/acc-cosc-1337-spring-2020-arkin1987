#include "tic_tac_toe.h"
#include <iostream>
#include <string>
using std::cout; using std::string; using std::cin; 
int main() 
{
	string first_player;
	cout << "Pick X or O\n";
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
		cout << "choose position\n";
		int position;
		cin >> position;
		try
		{
			game.mark_board(position);
		}
		catch (Error e)
		{
			cout << e.get_message() << "\n";
		}
		
		
		
		cout << "Continue?";
		cin >> choice;

	} while (choice == 'y');



	return 0;
}