//cpp
#include "tic_tac_toe.h"
#include <iostream>
using std::cout;
bool TicTacToe::game_over()
{
	if (check_column_win() == true || check_row_win() == true || check_diagonal_win() == true || check_board_full() == true)
	{
		return true;
	}

	else
	{
		return false;
	}

}

void TicTacToe::start_game(std::string first_player)
{
	if (first_player == "X" || first_player == "O")
	{
		first_player;
	}
	else
	{
		throw Error("Player must be X or O\n");
	}
	player = first_player;
	clear_board();
}

void TicTacToe::mark_board(int position)
{
	if (position <1 || position > 9)
	{
		throw Error("Postion must be 1-9\n");
	}
	else if (player == "")
	{
		throw Error("Must start game first\n");
	}
	else if (game_over() == false)
	{
		pegs[position - 1] = player;
		set_next_player();	
	}
}

void TicTacToe::display_board() const
{
	for (int i = 0; i < 9; i += 3)
	{
		cout << pegs[i] << "|" << pegs[i + 1] << "|" << pegs[i + 2] << "\n";

	}

	cout << "\n";
}



bool TicTacToe::check_board_full()
{
	for (auto peg : pegs)
	{
		if (peg == " ")
		{
			return false;
		}
	}
	return true;
}

void TicTacToe::set_next_player()
{
	if (player == "X")
	{
		player = "O";
	}
	else
	{
		player ="X";
	}
}

void TicTacToe::clear_board()
{
	for (auto &peg : pegs)
	{
		peg = " ";
	}
}

void TicTacToe::set_winner()
{
	if (player == "X")
	{
		winner = "O";
	}
	else if (player == "O")
	{
		winner = "X";
	}
	else
	{
		winner = "C";
	}
}

bool TicTacToe::check_column_win()
{
	if (pegs[0] == "X" && pegs[3] == "X" && pegs[6] == "X")
	{
		return true;
	}
	else if (pegs[1] == "X" && pegs[4] == "X" && pegs[7] == "X")
	{
		return true;
	}
	else if (pegs[2] == "X" && pegs[5] == "X" && pegs[8] == "X")
	{
		return true;
	}
	else if (pegs[0] == "O" && pegs[3] == "O" && pegs[6] == "O")
	{
		return true;
	}
	else if (pegs[1] == "O" && pegs[4] == "O" && pegs[7] == "O")
	{
		return true;
	}
	else if (pegs[2] == "O" && pegs[5] == "O" && pegs[8] == "O")
	{
		return true;
	}
	   	 
	return false;
}

bool TicTacToe::check_row_win()
{
	if (pegs[0] == "X" && pegs[1] == "X" && pegs[2] == "X")
	{
		return true;
	}
	else if (pegs[3] == "X" && pegs[4] == "X" && pegs[5] == "X")
	{
		return true;
	}
	else if (pegs[6] == "X" && pegs[7] == "X" && pegs[8] == "X")
	{
		return true;
	}
	else if (pegs[0] == "O" && pegs[1] == "O" && pegs[2] == "O")
	{
		return true;
	}
	else if (pegs[3] == "O" && pegs[4] == "O" && pegs[5] == "O")
	{
		return true;
	}
	else if (pegs[6] == "O" && pegs[7] == "O" && pegs[8] == "O")
	{
		return true;
	}




	return false;
}

bool TicTacToe::check_diagonal_win()
{
	if (pegs[0] == "X" && pegs[4] == "X" && pegs[8] == "X")
	{
		return true;
	}
	else if (pegs[6] == "X" && pegs[4] == "X" && pegs[2] == "X")
	{
		return true;
	}
	else if (pegs[0] == "O" && pegs[4] == "O" && pegs[8] == "O")
	{
		return true;
	}
	else if (pegs[6] == "O" && pegs[4] == "O" && pegs[2] == "O")
	{
		return true;
	}

	return false;
}

std::ostream& operator<<(std::ostream& out, const TicTacToe& d)
{
	out << "\n";
	for (int i = 0; i < 9; i += 3)
	{
		cout << d.pegs[i] << "|" << d.pegs[i + 1] << "|" << d.pegs[i + 2] << "\n";

	}
		
	return out;
	// TODO: insert return statement here
}

std::istream& operator>>(std::istream& in, TicTacToe& b)
{

	int position;
	cout << "choose position 1-9\n";
	
	in >> position;
	b.mark_board(position);
	return in;
	// TODO: insert return statement here
}
