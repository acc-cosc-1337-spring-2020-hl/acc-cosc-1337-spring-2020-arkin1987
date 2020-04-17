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
	TicTacToe() = default;
	TicTacToe::TicTacToe(int size) : pegs{ size * size, " " } {};
	bool game_over();
	void start_game(string first_player);
	void mark_board(int position);
	string get_player()const { return player; }  
	
	string get_winner()const { return winner; }
	friend std::ostream& operator << (std::ostream& out, const TicTacToe& d);
	friend std::istream& operator >>(std::istream& in, TicTacToe& b);

protected:
	std::vector<string> pegs;
	string player = "";
	virtual bool check_column_win();
	virtual bool check_row_win();
	virtual bool check_diagonal_win();
	
private:
	bool check_board_full();
	
	string winner = "";
	void set_next_player();
	
	void clear_board();
	void set_winner();
	vector<int> board_size;


};

#endif 