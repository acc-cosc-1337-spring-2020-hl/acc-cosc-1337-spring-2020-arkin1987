#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"
#include <iostream>
#include <string>
using std::cout; using std::string; using std::cin; 
int main() 
{
	char choice = 'y';
	TicTacToeManager game_manager;
	TicTacToe3 game3;
	TicTacToe4 game4;
	vector<std::reference_wrapper<TicTacToe>> game_choice{ game3, game4 };
	string first_player;

	do {
		TicTacToe3 game3;
		TicTacToe4 game4;
		vector<std::reference_wrapper<TicTacToe>> game_choice{ game3, game4 };
		
		int board_size;
		cout << "4 for 4X4 game or 3 for 3X3";
		cin >> board_size;
		if (board_size == 4) {

			game_manager.games.push_back(game_choice.at(0));
			TicTacToe4 game4;
		}
		else if (board_size == 3) {
			
			game_manager.games.push_back(game_choice.at(1));
			TicTacToe3 game3;
		}
		std::reference_wrapper<TicTacToe> last_game = game_manager.games.back();

		do
		{
			try {
				cout <<  "First Player select X or O\n";
				cin >> first_player;
				last_game.get().start_game(first_player);
			}
			catch (Error e) {
				cout << e.get_message();
			}

		}while (first_player != "X" && first_player != "O");
		do {
			cin >> last_game.get();
			cout << last_game.get();
		} while (!(last_game.get().game_over() == true));

		game_manager.save_game(last_game.get());
		cout << game_manager;



		
		
		cout << "Press y to play again";
		cin >> choice;

		




	}while (choice == 'y');
	
	
	return 0;
}