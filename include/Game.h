#ifndef GAME_H
#define GAME_H

#include <iostream>
#include <string>

#include "Player.h"
#include "Colors.h"
#include "Deck.h"

using namespace std;

class Game {

    public:
        Game() {

            m_deck = new Deck(0);
        }

        bool GetPlayers() {

            int players;
            cout << "How many players?" << endl;
            cin >> players;
            if (players <= 0) {

                cout << "What part of " << RED << "\"How many players\"" << RESET << " did you not understand?" << endl << endl;
                return false;
            }
            else {
                
                m_numPlayers = players;
                cout << "You have chosen to have a " << RED << m_numPlayers << RESET << " player game!" << endl;
                if (m_numPlayers > 6) cout << "Why such a big game?" << endl;
                cout << endl;
                return true;
            }
        }

        void AddPlayer(int index) {
            
            string playerName;
            cout << "What is the player's name?" << endl << endl;
            cin >> playerName;
            cout << "Welcome, " << RED << playerName << RESET << endl;
            m_players[index] = new Player(playerName, m_deck);
            cout << endl;
        }

        bool InitPlayers() {

            cout << "Time to set up players!" << endl;

            for (int i = 0; i < m_numPlayers; i++) {
                
                try {
                    
                    AddPlayer(i);
                }
                catch(exception e) {

                    return false;
                }
            }
            return true;
        }

        void PrintHands() {

            for (int i = 0; i < m_numPlayers; i++) {

                m_players[i]->PrintHand();
            }
        }

        void ShuffleDeck() {

            m_deck->Shuffle();
        }

        void DebugStats() {

            m_deck->DebugStats();
            /*for (int i = 0; i < m_numPlayers; i++) {

                m_players[i]->PrintHand();
            }
            std::cout << std::endl;*/
        }

        void TestDraw() {

            m_players[0]->Draw();
        }
        
        void TestPlay() {

            m_players[0]->PlayCard();
        }

        void TestTakeTurn() {

            m_players[0]->TakeTurn();
        }

        void TestCycle() {

            m_deck->Cycle();
        }
    
    private:

        Deck *m_deck;
        int m_numPlayers;
        Player *m_players[];
};

#endif