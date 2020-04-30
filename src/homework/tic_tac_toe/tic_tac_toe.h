//h
#include <string>
#include <vector>
#include<iostream>

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
	TicTacToe(vector<string> p , string win) : pegs{p}, winner{win} {}
	explicit TicTacToe(int size) : pegs(size* size, " ") {};
	
	std::vector<string> get_pegs() { return pegs; }
	bool game_over();
	void start_game(std::string first_player);
	void mark_board(int position);
	std::string get_player() const { return player; }
	std::string get_winner()const { return winner; }
	friend std::ostream& operator<<(std::ostream& out, const TicTacToe& t);
	friend std::istream& operator>>(std::istream& in, TicTacToe& t);
protected:
	virtual bool check_column_win() = 0;
	virtual bool check_row_win() = 0;
	virtual bool check_diagonal_win() = 0;
	std::vector<std::string> pegs;

private:
	void set_next_player();
	bool check_board_full();
	void clear_board();
	void set_winner();
	std::string player;
	std::string winner;
};

#endif 