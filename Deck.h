#include <string>
#include <iostream>

#include "Card.h"

using namespace std;

class Deck{
    private:
        int NumCards;
        Card *Cards[52];
        
    public:
        Deck();
        void ShuffleDeck();
        void PrintDeck();
        Card* getCard();
};