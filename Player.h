#ifndef PLAYER_H
#define PLAYER_H

#include <vector>
#include <string>

#include "Deck.h"
#include "Colors.h"

class Player {

    public:

        Player(std::string& nameToSet, Deck *deckToSet) {

            m_name = nameToSet;
            m_deck = deckToSet;
        }

        void Draw() {

            m_cards.push_back(m_deck->Draw());
        }

        void PlayCard() {

            m_deck->PlayCard(m_cards[m_cards.size() - 1]);
            m_cards.pop_back();
        }

        void PrintHand() {

            std::cout << m_name << "'s hand: ";
            for (int i = 0; i < m_cards.size(); i++) {

                std::cout << m_cards[i] << "    ";
            }
            std::cout << std::endl;
        }

        void TakeTurn() {

            std::cout << RED << m_name << "'s" << GREEN << " trun:" << std::endl;
            std::cout << YELLOW << "Choose an action:" << std::endl;
            std::cout << GREEN << "1: " << RESET << "Play selected card" << std::endl;
            std::cout << GREEN << "2: " << RESET << "Select a different card" << std::endl;
            std::cout << std::endl;
            std::string answer;
            while(answer != "0" && answer != "1") {
                
                std::cout << ">> ";
                std::getline(std::cin, answer);
            }
            if (answer == "0") {

                
            }
        }
    
    private:

        std::string m_name;
        Deck *m_deck;
        std::vector<Card> m_cards;
};

/*
----------
|  RED   |
|        |
|        |
|   9    |
|        |
|        |
|  RED   |
----------
*/

#endif