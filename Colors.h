#ifndef COLORS_H
#define COLORS_H

#include <iostream>

using namespace std;

#define RESET   "\033[37m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"

void SwitchToColor(string color) {

    string toOutput = "";

    if (color == "reset") {

        toOutput = RESET;
    }
    else if (color == "red") {

        toOutput = RED;
    }
    else if (color == "green") {

        toOutput = GREEN;
    }
    else if (color == "yellow") {

        toOutput = YELLOW;
    }
    else if (color == "blue") {

        toOutput = BLUE;
    }

    cout << toOutput;
}

#endif