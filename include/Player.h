#ifndef PLAYER_H
#define PLAYER_H

#include <vector>
#include <string>

#include "Deck.h"
#include "Colors.h"
#include "prompter.h"
#include "Artist.h"

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

        bool PlayCard() {

            if (!m_deck->PlayCard(m_cards[indexOfCardToPlay])) {
            
                std::cout << RED << "Could not play the selected card!" << RESET << std::endl << std::endl;
                PromptOK();
                return false;
            }
            else {

                m_cards.pop_back();
                return true;
            }
        }

        void PrintHand(bool showIndex = false) {

            int cardsSize = m_cards.size();
            std::string midfix = "";
            char iAsInt[3] = {0};
            std::cout << m_name << "'s hand";
            if (showIndex) {

                std::cout << " with index\n";
            }
            else {

                std::cout << "\n";
            }
            std::cout << "-----------------------" << std::endl;
            for (int i = 0; i < cardsSize; i++) {

                if (showIndex) {

                    sprintf(iAsInt, "%d", i + 1);
                    midfix = "";
                    midfix += "  ";
                    midfix += iAsInt;
                    midfix += "  ";
                    std::cout << m_deck->CardToString(m_cards[i], "     ", midfix) << std::endl;
                }
                else {
                    
                    std::cout << m_deck->CardToString(m_cards[i]) << std::endl;
                }
                if (i != cardsSize - 1) std::cout << std::endl;
            }
            std::cout << "-----------------------" << std::endl;
        }

        void TakeTurn() {

            ClearAndPrintTitle();
            m_deck->PrintPlayPileCard();
            PrintHand(true);

            std::cout << RED << "\nCurrent selected card is " << YELLOW << indexOfCardToPlay + 1 << RESET << std::endl << std::endl;

            std::cout << RED << m_name << "'s" << GREEN << " turn:" << std::endl;
            std::string choices[] = {"Play the selected card", "Select a different card", "Draw card"};
            std::string inputChoices[] = {"1", "2", "3"};
            int answer = prompt(choices, inputChoices, 2);
            //std::cout << "You have selected: " << RED << choices[answer] << RESET << std::endl << std::endl;
            if (answer == 0) {

                while (!PlayCard()) {
                    
                    std::string choicesFailed[] = {"Select a different card", "Draw a card"};
                    std::string optionsFailed[] = {"1", "2"};
                    int result = prompt(choicesFailed, optionsFailed, 2);
                    if (result == 0) {

                        SelectCard();
                    }
                    else {

                        Draw();
                        break;
                    }
                }
            }
            else if (answer == 1) {
                
                SelectCard();
                TakeTurn();
            }
            else {

                Draw();
            }
        }

        void SelectCard() {

            char buffer[3];
            std::string choices[m_cards.size()];
            ClearAndPrintTitle();
            m_deck->PrintPlayPileCard();
            std::cout << GREEN << "Card selection\n" << RESET << std::endl;
            PrintHand(true);
            std::cout << "Select a card" << std::endl;
            for (int i = 0; i < m_cards.size(); i++) {

                sprintf(buffer, "%d", i + 1);
                choices[i] = buffer;
            }
            int result = prompt(choices, choices, m_cards.size());
            indexOfCardToPlay = result;
        }
    
    private:

        std::string m_name;
        Deck *m_deck;
        std::vector<Card> m_cards;
        int indexOfCardToPlay;
};

#endif