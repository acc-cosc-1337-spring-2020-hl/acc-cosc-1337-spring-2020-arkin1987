//h
#include <string>

class Error
{
public:
	Error(std::string msg) : message{ msg } {}					//Constructor
	std::string get_message(message)const { return message; }
private:
	std::string message;

};

class TicTacToe
{
public:
	void start_game(std::string first_player);
	void mark_board(int position);
	std::string get_player()const;
private:
	void set_next_player();
	std::string player;

};