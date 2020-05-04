#ifndef ARTIST_H
#define ARTIST_H

#include <iostream>
#include <string.h>

#include "Letters.h"

using namespace std;

const int NUM_OF_ROW_IN_CARD = 4;

const string A_CARD_END = "|-------|";
const string A_CARD_MIDDLE = "|#######|";

const string A_CARD_PARTIAL_END = "|--";
const string A_CARD_PARTIAL_MIDDLE = "|##";

string GetPartOfBigLetterFromLetterAndRow(char letter, int row) {

    if (row == 1) {

        if (letter == ' ') { return __1; }
        else if (letter == 'a') { return A_1; }
        else if (letter == 'b') { return B_1; }
        else if (letter == 'c') { return C_1; }
        else if (letter == 'd') { return D_1; }
        else if (letter == 'e') { return E_1; }
        else if (letter == 'f') { return F_1; }
        else if (letter == 'g') { return G_1; }
        else if (letter == 'h') { return H_1; }
        else if (letter == 'i') { return I_1; }
        else if (letter == 'j') { return J_1; }
        else if (letter == 'k') { return K_1; }
        else if (letter == 'l') { return L_1; }
        else if (letter == 'm') { return M_1; }
        else if (letter == 'n') { return N_1; }
        else if (letter == 'o') { return O_1; }
        else if (letter == 'p') { return P_1; }
        else if (letter == 'q') { return Q_1; }
        else if (letter == 'r') { return R_1; }
        else if (letter == 's') { return S_1; }
        else if (letter == 't') { return T_1; }
        else if (letter == 'u') { return U_1; }
        else if (letter == 'v') { return V_1; }
        else if (letter == 'w') { return W_1; }
        else if (letter == 'x') { return X_1; }
        else if (letter == 'y') { return Y_1; }
        else if (letter == 'z') { return Z_1; }
        else { return QUESTION_1; }
    }

    else if (row == 2) {

        if (letter == ' ') { return __2; }
        else if (letter == 'a') { return A_2; }
        else if (letter == 'b') { return B_2; }
        else if (letter == 'c') { return C_2; }
        else if (letter == 'd') { return D_2; }
        else if (letter == 'e') { return E_2; }
        else if (letter == 'f') { return F_2; }
        else if (letter == 'g') { return G_2; }
        else if (letter == 'h') { return H_2; }
        else if (letter == 'i') { return I_2; }
        else if (letter == 'j') { return J_2; }
        else if (letter == 'k') { return K_2; }
        else if (letter == 'l') { return L_2; }
        else if (letter == 'm') { return M_2; }
        else if (letter == 'n') { return N_2; }
        else if (letter == 'o') { return O_2; }
        else if (letter == 'p') { return P_2; }
        else if (letter == 'q') { return Q_2; }
        else if (letter == 'r') { return R_2; }
        else if (letter == 's') { return S_2; }
        else if (letter == 't') { return T_2; }
        else if (letter == 'u') { return U_2; }
        else if (letter == 'v') { return V_2; }
        else if (letter == 'w') { return W_2; }
        else if (letter == 'x') { return X_2; }
        else if (letter == 'y') { return Y_2; }
        else if (letter == 'z') { return Z_2; }
        else { return QUESTION_2; }
    }

    else if (row == 3) {

        if (letter == ' ') { return __3; }
        else if (letter == 'a') { return A_3; }
        else if (letter == 'b') { return B_3; }
        else if (letter == 'c') { return C_3; }
        else if (letter == 'd') { return D_3; }
        else if (letter == 'e') { return E_3; }
        else if (letter == 'f') { return F_3; }
        else if (letter == 'g') { return G_3; }
        else if (letter == 'h') { return H_3; }
        else if (letter == 'i') { return I_3; }
        else if (letter == 'j') { return J_3; }
        else if (letter == 'k') { return K_3; }
        else if (letter == 'l') { return L_3; }
        else if (letter == 'm') { return M_3; }
        else if (letter == 'n') { return N_3; }
        else if (letter == 'o') { return O_3; }
        else if (letter == 'p') { return P_3; }
        else if (letter == 'q') { return Q_3; }
        else if (letter == 'r') { return R_3; }
        else if (letter == 's') { return S_3; }
        else if (letter == 't') { return T_3; }
        else if (letter == 'u') { return U_3; }
        else if (letter == 'v') { return V_3; }
        else if (letter == 'w') { return W_3; }
        else if (letter == 'x') { return X_3; }
        else if (letter == 'y') { return Y_3; }
        else if (letter == 'z') { return Z_3; }
        else { return QUESTION_3; }
    }

    else if (row == 4) {

        if (letter == ' ') { return __4; }
        else if (letter == 'a') { return A_4; }
        else if (letter == 'b') { return B_4; }
        else if (letter == 'c') { return C_4; }
        else if (letter == 'd') { return D_4; }
        else if (letter == 'e') { return E_4; }
        else if (letter == 'f') { return F_4; }
        else if (letter == 'g') { return G_4; }
        else if (letter == 'h') { return H_4; }
        else if (letter == 'i') { return I_4; }
        else if (letter == 'j') { return J_4; }
        else if (letter == 'k') { return K_4; }
        else if (letter == 'l') { return L_4; }
        else if (letter == 'm') { return M_4; }
        else if (letter == 'n') { return N_4; }
        else if (letter == 'o') { return O_4; }
        else if (letter == 'p') { return P_4; }
        else if (letter == 'q') { return Q_4; }
        else if (letter == 'r') { return R_4; }
        else if (letter == 's') { return S_4; }
        else if (letter == 't') { return T_4; }
        else if (letter == 'u') { return U_4; }
        else if (letter == 'v') { return V_4; }
        else if (letter == 'w') { return W_4; }
        else if (letter == 'x') { return X_4; }
        else if (letter == 'y') { return Y_4; }
        else if (letter == 'z') { return Z_4; }
        else { return QUESTION_4; }
    }

    else {

        if (letter == ' ') { return __5; }
        else if (letter == 'a') { return A_5; }
        else if (letter == 'b') { return B_5; }
        else if (letter == 'c') { return C_5; }
        else if (letter == 'd') { return D_5; }
        else if (letter == 'e') { return E_5; }
        else if (letter == 'f') { return F_5; }
        else if (letter == 'g') { return G_5; }
        else if (letter == 'h') { return H_5; }
        else if (letter == 'i') { return I_5; }
        else if (letter == 'j') { return J_5; }
        else if (letter == 'k') { return K_5; }
        else if (letter == 'l') { return L_5; }
        else if (letter == 'm') { return M_5; }
        else if (letter == 'n') { return N_5; }
        else if (letter == 'o') { return O_5; }
        else if (letter == 'p') { return P_5; }
        else if (letter == 'q') { return Q_5; }
        else if (letter == 'r') { return R_5; }
        else if (letter == 's') { return S_5; }
        else if (letter == 't') { return T_5; }
        else if (letter == 'u') { return U_5; }
        else if (letter == 'v') { return V_5; }
        else if (letter == 'w') { return W_5; }
        else if (letter == 'x') { return X_5; }
        else if (letter == 'y') { return Y_5; }
        else if (letter == 'z') { return Z_5; }
        else { return QUESTION_5; }
    }
}


void PrintBigLetters(string s) {

    int s_length = s.size();
    for (int i = 0; i < 5; i++) {
        
        for (int j = 0; j < s_length; j++) {

            cout << GetPartOfBigLetterFromLetterAndRow(s[j], i + 1);
            cout << " ";
        }
        cout << endl;
    }
}

void PrintCardsOverlapped(int cards) {

    for (int i = 0; i < cards - 1; i++) {

        cout << A_CARD_PARTIAL_END;
    }
    cout << A_CARD_END << endl;
    for (int i = 0; i < NUM_OF_ROW_IN_CARD; i++) {

        for (int j = 0; j < cards - 1; j++) {

            cout << A_CARD_PARTIAL_MIDDLE;
        }
        cout << A_CARD_MIDDLE << endl;
    }
    for (int i = 0; i < cards - 1; i++) {

        cout << A_CARD_PARTIAL_END;
    }
    cout << A_CARD_END << endl;
}

#endif