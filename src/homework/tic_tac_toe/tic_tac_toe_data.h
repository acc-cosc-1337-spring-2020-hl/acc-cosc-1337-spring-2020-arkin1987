 //h
#include "tic_tac_toe.h"
#include <fstream>
#include <string>
#include <vector>
#ifndef TIC_TAC_TOE_DATA_H
#define TIC_TAC_TOE_DATA_H
using std::vector;

class TicTacToeData 

{
public:
    void save_pegs(const vector<string>& pgs);
    std::vector<std::unique_ptr<TicTacToe>>  get_games();
private:
    const std::string file_name{ "tic_tac_toe.dat" };
    
};


#endif