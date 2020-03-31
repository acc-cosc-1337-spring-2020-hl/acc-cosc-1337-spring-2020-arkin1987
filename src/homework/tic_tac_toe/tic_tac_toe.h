//h
#include <string>
#include <vector>
#ifndef TIC_TAC_TOE_H	// header guards
#define TIC_TAC_TOE_H
using std::vector;
using std::string;
class Error
{
public:
	Error(std::string msg) : message{ msg } {}					//Constructor
	std::string get_message() { return message; }
private:
	std::string message;

};

class TicTacToe
{
public:
	bool game_over();
	void start_game(std::string first_player);
	void mark_board(int position);
	std::string get_player()const { return player; }  
	void display_board()const;
	string get_winner() { return winner;}
	
private:
	bool check_board_full();
	std::string player;
	string winner;
	void set_next_player();
	vector <string> pegs{ 9, " " };
	void clear_board();
	void set_winner();
	bool check_column_win();
	bool check_row_win();
	bool check_diagonal_win();


};

#endif 