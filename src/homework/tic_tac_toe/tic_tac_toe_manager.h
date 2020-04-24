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
	vector<std::unique_ptr<TicTacToe>> games;
	int get_x_wins() { return  x_wins; }
	int get_o_wins() { return  o_wins; }
	int get_ties() { return  ties; }
private:
	void update_winner_count(std::string winner);
	
	int o_wins{ 0 }, x_wins{ 0 }, ties{ 0 };
};
#endif // !TIC_TAC_TOE_MANAGER_H