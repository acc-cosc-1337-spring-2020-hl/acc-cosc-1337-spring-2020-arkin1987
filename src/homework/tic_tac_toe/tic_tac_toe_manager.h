//h
#include<iostream>
#include<vector>
#include "tic_tac_toe.h"
#include <memory>

using std::vector;

#ifndef TIC_TAC_TOE_MANAGER_H
#define TIC_TAC_TOE_MANAGER_H

class TicTacToeManager
{
public:
	void save_game(std::unique_ptr<TicTacToe>&game);
	friend std::ostream& operator<<(std::ostream& out, const TicTacToeManager& m);
private:
	void update_winner_count(std::string winner);
	vector<std::unique_ptr<TicTacToe>> games;
	int o_wins{ 0 }, x_wins{ 0 }, ties{ 0 };
};
#endif // !TIC_TAC_TOE_MANAGER_H