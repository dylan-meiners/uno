#include <iostream>
#include <Windows.h>
#include <cstdlib>

#include "..\include\Game.h"
#include "..\include\Colors.h"
#include "..\include\Deck.h"
#include "..\include\Artist.h"
#include "..\include\prompter.h"

using namespace std;

//-----------------------------------------------------------------------------

Game game;

int main() {

    std::srand(time(0));

    ClearAndPrintTitle();

    if (!game.GetPlayers()) {

        return EXIT_FAILURE;
    }
    if (!game.InitPlayers()) {

        return EXIT_FAILURE;
    }

    game.ShuffleDeck();
    //game.DebugStats();

    bool result = false;
    std::cout << "Would you like to start the game?" << std::endl;
    result = PromptTF();

    if (result) game.TestTakeTurn();
    
    return 0;
}