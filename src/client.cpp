#include "stdafx.h"
#include "file_access.h"
#include "game.h"

// To compile: g++ client.cpp game.cpp file_access.cpp -o game -std=c++14
// https://github.com/btccom/Hire/blob/master/exercise/psychic-poker-en.md

// Client Code.
int main()
{
    file_access file("game.txt");
    if(!file.load_file())
    {
        return EXIT_FAILURE;
    }

    game game_session(file.get_input());
    game_session.show_input();
    game_session.calculate_best_hand();

    game_session.show_output();

    return EXIT_SUCCESS;
}