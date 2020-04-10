//h
#include<iostream>
#include<vector>
#include "tic_tac_toe.h"
using std::vector;

#ifndef TIC_TAC_TOE_MANAGER_H
#define TIC_TAC_TOE_MANAGER_H

class TicTacToeManager {
public:
	void save_game( TicTacToe b);
	friend std::ostream& operator<<(std::ostream& out, TicTacToeManager& manager);
	//int get_winner_from_private() { return x_win, o_win, ties; }
private:
	vector<TicTacToe> games;
	int x_win = { 0 };
	int o_win = { 0 };
	int ties = { 0 };
	void update_winner_count(string winner);
	
};
#endif // !TIC_TAC_TOE_MANAGER_H