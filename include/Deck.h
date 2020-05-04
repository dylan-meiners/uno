#ifndef DECK_H
#define DECK_H

#include <algorithm>
#include <vector>

#include "Utils.h"

enum Color {

    kRed,
    kBlue,
    kGreen,
    kYellow
};

enum Card {

    kRed_Zero       = 0,
    kRed_One        = 1,
    kRed_Two        = 2,
    kRed_Three      = 3,
    kRed_Four       = 4,
    kRed_Five       = 5,
    kRed_Six        = 6,
    kRed_Seven      = 7,
    kRed_Eight      = 8,
    kRed_Nine       = 9,

    kBlue_Zero      = 10,
    kBlue_One       = 11,
    kBlue_Two       = 12,
    kBlue_Three     = 13,
    kBlue_Four      = 14,
    kBlue_Five      = 15,
    kBlue_Six       = 16,
    kBlue_Seven     = 17,
    kBlue_Eight     = 18,
    kBlue_Nine      = 19,

    kGreen_Zero     = 20,
    kGreen_One      = 21,
    kGreen_Two      = 22,
    kGreen_Three    = 23,
    kGreen_Four     = 24,
    kGreen_Five     = 25,
    kGreen_Six      = 26,
    kGreen_Seven    = 27,
    kGreen_Eight    = 28,
    kGreen_Nine     = 29,

    kYellow_Zero    = 30,
    kYellow_One     = 31,
    kYellow_Two     = 32,
    kYellow_Three   = 33,
    kYellow_Four    = 34,
    kYellow_Five    = 35,
    kYellow_Six     = 36,
    kYellow_Seven   = 37,
    kYellow_Eight   = 38,
    kYellow_Nine    = 39,

    kRedReverse     = 40,
    kBlueReverse    = 41,
    kGreenReverse   = 42,
    kYellowReverse  = 43,

    kRedDrawTwo     = 41,
    kBlueDrawTwo    = 41,
    kGreenDrawTwo   = 41,
    kYellowDrawTwo  = 41,

    kRedSkip        = 41,
    kBlueSkip       = 41,
    kGreenSkip      = 41,
    kYellowSkip     = 41,

    kWild           = 43,
    kWildDrawFour   = 44,
};

class Deck {

    public:

        Deck(int a) {

            Card cardMap[3] = {kRed_Zero,
                                 kRed_One,
                                 //kRed_One,
                                 kRed_Two
                                 /*kRed_Two,
                                 kRed_Three,
                                 kRed_Three,
                                 kRed_Four,
                                 kRed_Four,
                                 kRed_Five,
                                 kRed_Five,
                                 kRed_Six,
                                 kRed_Six,
                                 kRed_Seven,
                                 kRed_Seven,
                                 kRed_Eight,
                                 kRed_Eight,
                                 kRed_Nine,
                                 kRed_Nine,
                                   
                                 kBlue_Zero,
                                 kBlue_One,
                                 kBlue_One,
                                 kBlue_Two,
                                 kBlue_Two,
                                 kBlue_Three,
                                 kBlue_Three,
                                 kBlue_Four,
                                 kBlue_Four,
                                 kBlue_Five,
                                 kBlue_Five,
                                 kBlue_Six,
                                 kBlue_Six,
                                 kBlue_Seven,
                                 kBlue_Seven,
                                 kBlue_Eight,
                                 kBlue_Eight,
                                 kBlue_Nine,
                                 kBlue_Nine,
                                   
                                 kGreen_Zero,
                                 kGreen_One,
                                 kGreen_One,
                                 kGreen_Two,
                                 kGreen_Two,
                                 kGreen_Three,
                                 kGreen_Three,
                                 kGreen_Four,
                                 kGreen_Four,
                                 kGreen_Five,
                                 kGreen_Five,
                                 kGreen_Six,
                                 kGreen_Six,
                                 kGreen_Seven,
                                 kGreen_Seven,
                                 kGreen_Eight,
                                 kGreen_Eight,
                                 kGreen_Nine,
                                 kGreen_Nine,

                                 kYellow_Zero,
                                 kYellow_One,
                                 kYellow_One,
                                 kYellow_Two,
                                 kYellow_Two,
                                 kYellow_Three,
                                 kYellow_Three,
                                 kYellow_Four,
                                 kYellow_Four,
                                 kYellow_Five,
                                 kYellow_Five,
                                 kYellow_Six,
                                 kYellow_Six,
                                 kYellow_Seven,
                                 kYellow_Seven,
                                 kYellow_Eight,
                                 kYellow_Eight,
                                 kYellow_Nine,
                                 kYellow_Nine,
                                    
                                 kRedDrawTwo,
                                 kRedDrawTwo,
                                 kBlueDrawTwo,
                                 kBlueDrawTwo,
                                 kGreenDrawTwo,
                                 kGreenDrawTwo,
                                 kYellowDrawTwo,
                                 kYellowDrawTwo,
                                    
                                 kRedSkip,
                                 kRedSkip,
                                 kBlueSkip,
                                 kBlueSkip,
                                 kGreenSkip,
                                 kGreenSkip,
                                 kYellowSkip,
                                 kYellowSkip,
                                    
                                 kRedReverse,
                                 kRedReverse,
                                 kBlueReverse,
                                 kBlueReverse,
                                 kGreenReverse,
                                 kGreenReverse,
                                 kYellowReverse,
                                 kYellowReverse,
                                    
                                 kWild,
                                 kWild,
                                 kWild,
                                 kWild,
                                    
                                 kWildDrawFour,
                                 kWildDrawFour,
                                 kWildDrawFour,
                                 kWildDrawFour*/};

            for (int i = 0; i < 3; i++) {

                m_drawPile.push_back(cardMap[i]);
            }
        }

        Card GetRandomCard() {

            return (Card)RandomIntInRnage(0, 43);
        }

        Color GetColorFromCard(Card card) {

            if (card == kRed_Zero   ||
                card == kRed_One    ||
                card == kRed_Two    ||
                card == kRed_Three  ||
                card == kRed_Four   ||
                card == kRed_Five   ||
                card == kRed_Six    ||
                card == kRed_Seven  ||
                card == kRed_Eight  ||
                card == kRed_Nine) return kRed;
            
            else if (card == kBlue_Zero     ||
                     card == kBlue_One      ||
                     card == kBlue_Two      ||
                     card == kBlue_Three    ||
                     card == kBlue_Four     ||
                     card == kBlue_Five     ||
                     card == kBlue_Six      ||
                     card == kBlue_Seven    ||
                     card == kBlue_Eight    ||
                     card == kBlue_Nine) return kBlue;

            else if (card == kGreen_Zero     ||
                     card == kGreen_One      ||
                     card == kGreen_Two      ||
                     card == kGreen_Three    ||
                     card == kGreen_Four     ||
                     card == kGreen_Five     ||
                     card == kGreen_Six      ||
                     card == kGreen_Seven    ||
                     card == kGreen_Eight    ||
                     card == kGreen_Nine) return kGreen;

            else {
                
                return kYellow;
            }
        }

        void Shuffle() {

            random_shuffle(m_drawPile.begin(), m_drawPile.end());
        }

        void Cycle() {

            Card playCard = m_playPile.back();
            m_playPile.pop_back();
            m_drawPile = m_playPile;
            m_playPile.clear();
            m_playPile.push_back(playCard);
            Shuffle();
        }

        Card Draw() {

            //I have no idea why it would be below 0, but WHO KNOWS FOR SURE
            if (m_drawPile.size() <= 0) {

                Cycle();
            }
            
            //Get last element's value
            Card toReturn = m_drawPile[m_drawPile.size() - 1];
            //Revome last element
            m_drawPile.pop_back();

            return toReturn;
        }

        void PlayCard(Card cardToPlay) {

            m_playPile.push_back(cardToPlay);
        }

        void DebugStats() {

            std::cout << "Draw pile: ";
            for (int i = 0; i < m_drawPile.size(); i++) {

                std::cout << m_drawPile[i] << "    ";
            }
            std::cout << std::endl;

            std::cout << "Play pile: ";
            for (int i = 0; i < m_playPile.size(); i++) {

                std::cout << m_playPile[i] << "    ";
            }
            std::cout << std::endl;
        }

    private:

        std::vector<Card> m_drawPile;
        std::vector<Card> m_playPile;
};

#endif