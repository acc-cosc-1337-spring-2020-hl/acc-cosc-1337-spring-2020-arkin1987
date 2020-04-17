#include "tic_tac_toe_4.h"

/*
class function check_column_win
Win by column if and return true if (each column index)
0, 1,  2,  3 
4, 5,  6,  7 
8, 9, 10, 11 
12,13,14, 15 
else
false
*/



#include "tic_tac_toe_4.h"
#include <iostream>

using std::cout;
/*
class function check_row_win
Win by row if
0, 1,  2,  3 are equal
4, 5,  6,  7 are equal
8, 9, 10, 11 are equal 
12,13,14, 15 are equal
*/



/*
class function check_diagonal_win
Win diagonally
0, 1,  2,  3
4, 5,  6,  7
8, 9, 10, 11
12,13,14, 15

*/

std::ostream& operator<<(std::ostream& out, TicTacToe4& game)
{
	out << "\n";
	for (int i = 0; i < 16; i += 4) {
		out << game.pegs[i] << " | " << game.pegs[i + 1] << " | " << game.pegs[i + 2] << " | "
			<<game.pegs[i + 3] <<"\n";
	}
	return out;
}

std::istream& operator>>(std::istream& in, TicTacToe4& game)
{
	int position;

	in >> position;
	game.mark_board(position);
	return in;
}

bool TicTacToe4::check_column_win()
{
	string last_player;

	for (int i = 0; i < 4; i++) {
		if ("X" == pegs[i] && "X" == pegs[i + 4] && "X" == pegs[i + 8] && "X" == pegs[i + 12]){
			return true;
		}
		else if ("O" == pegs[i] && "O" == pegs[i + 4] && "O" == pegs[i + 8] && "O" == pegs[i + 12]) {
			return true;
		}

	}
	return false;
}

bool TicTacToe4::check_diagonal_win()
{
	if (pegs[0] == "X" && pegs[5] == "X" && pegs[10] == "X" && pegs[15] == "X") {
		return true;
	}
	else if (pegs[0] == "O" && pegs[5] == "O" && pegs[10] == "O" && pegs[15] == "O") {
		return true;
	}
	else if (pegs[3] == "X" && pegs[6] == "X" && pegs[9] == "X" && pegs[12] == "X") {
		return true;
	}
	else if (pegs[3] == "O" && pegs[6] == "O" && pegs[9] == "O" && pegs[12] == "O") {
		return true;
	}
	return false;
}

bool TicTacToe4::check_row_win()
{
	{
		for (int i = 0; i < 16; i += 4) {
			if (player == pegs[i] && player == pegs[i + 1] && player == pegs[i + 2] && player == pegs[i + 3]) {
				return true;
			}

		}
		return false;
	}
}
