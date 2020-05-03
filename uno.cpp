#include <iostream>
#include <Windows.h>
#include <cstdlib>

#include "Game.h"
#include "Colors.h"
#include "Deck.h"
#include "Artist.h"

using namespace std;

//-----------------------------------------------------------------------------

Game game;

int main() {

    std::srand(time(0));

    system("CLS");
    SwitchToColor("reset");

    PrintBigLetters("welcome to uno");

    cout << RED     << "---------------------------"
         << GREEN   << "---------------------------"
         << BLUE    << "---------------------------"
         << YELLOW  << "----------------------------"
         << RESET << endl << endl;

    if (!game.GetPlayers()) {

        return EXIT_FAILURE;
    }
    if (!game.InitPlayers()) {

        return EXIT_FAILURE;
    }

    game.TestTakeTurn();
    
    return 0;
}