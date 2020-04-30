//h
#include "tic_tac_toe.h"
#include<string>
#include<vector>

#ifndef TIC_TAC_TOE_H_3
#define TIC_TAC_TOE_H_3

class TicTacToe3 : public TicTacToe
{
public:
	TicTacToe3() : TicTacToe(3) {}
	TicTacToe3(std::vector<string> p, string winner) : TicTacToe(p, winner) {};
private:
	bool check_column_win() override;
	bool check_row_win() override;
	bool check_diagonal_win() override;

};







#endif // !TIC_TAC_TOE_H_3