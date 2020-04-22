//h
//h
#include "tic_tac_toe.h"
#include<string>
#include<vector>

#ifndef TIC_TAC_TOE_H_4
#define TIC_TAC_TOE_H_4

class TicTacToe4 : public TicTacToe
{
public:
	TicTacToe4() : TicTacToe(4) {}
private:
	bool check_column_win() override;
	bool check_row_win() override;
	bool check_diagonal_win() override;

};







#endif // !TIC_TAC_TOE_H_4