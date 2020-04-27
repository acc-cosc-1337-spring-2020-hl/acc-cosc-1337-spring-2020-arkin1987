//cpp
#include "tic_tac_toe_data.h"

void TicTacToeData::save_pegs(const vector<string>& pgs)
{
	std::ofstream file_out(file_name, std::ios_base::trunc);
	
	for (auto peg : pgs)
	{
		//file_out << peg.
	}

	file_out.close();
}

std::vector<std::unique_ptr<TicTacToe>> TicTacToeData::get_games()
{
	return std::vector<std::unique_ptr<TicTacToe>>();
}
