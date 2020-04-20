//cpp
#include "tic_tac_toe.h"
#include <iostream>
#include <math.h>
using std::cout;
bool TicTacToe::game_over()
{
	if (check_column_win() == true || check_row_win() == true || check_diagonal_win() == true )
	{
		return true;
		set_winner();
	}

	else if (check_board_full() == true)
	{
		winner = "C";
		return true;
	}
	return false;

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
	if (position <1 || position > 9 && pegs.size() == 9)
	{
		throw Error("Postion must be 1-9\n");
	}
	if (position < 1 || position > 16 && pegs.size() == 16)
	{
		throw Error("Postion must be 1-16\n");
	}
	else if (player == "")
	{
		throw Error("Must start game first\n");

	}
	
	pegs[position - 1] = player;
	set_next_player();	
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
	
}

bool TicTacToe::check_column_win()
{
	return false;
}

bool TicTacToe::check_row_win()
{
	return false;
}

bool TicTacToe::check_diagonal_win()
{
	return false;
}

std::ostream& operator<<(std::ostream& out, const TicTacToe& t)
{
	out << "\n";
	for (std::size_t i = 0; i < t.pegs.size(); i += sqrt(t.pegs.size()))
	{
		out << t.pegs[i] << "|" << t.pegs[i + 1] << "|" << t.pegs[i + 2];

		if (t.pegs.size() == 16)
		{
			out << "|" << t.pegs[i + 3];
		}

		out << "\n";
	}

		
	return out;
	
}

std::istream& operator>>(std::istream& in, TicTacToe& b)
{

	int position;
	cout << "choose position 1-9\n";
	
	in >> position;
	b.mark_board(position);
	return in;
	
}
