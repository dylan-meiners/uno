#ifndef PLAYER_H
#define PLAYER_H

#include <vector>
#include <string>

#include "Deck.h"
#include "Colors.h"
#include "prompter.h"

class Player {

    public:

        Player(std::string& nameToSet, Deck *deckToSet) {

            m_name = nameToSet;
            m_deck = deckToSet;
            indexOfCardToPlay = 0;
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
            std::string choices[] = {"Play selected card", "Select a different card"};
            std::string inputChoices[] = {"1", "2"};
            int answer = prompt(choices, inputChoices, 2);
            std::cout << "You have selected: " << RED << choices[answer] << RESET << std::endl;
        }
    
    private:

        std::string m_name;
        Deck *m_deck;
        std::vector<Card> m_cards;
        int indexOfCardToPlay;
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