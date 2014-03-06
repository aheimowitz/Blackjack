#include <string>
#include <iostream>
#include <time.h>

#include "Deck.h"

Deck::Deck(){
    NumCards = 52;
    ShuffleDeck();
}

Card* Deck::getCard(){
    bool goodcard = false;
    int randcard = 0;
    if(NumCards < 10){
        ShuffleDeck();
    }
    while(!goodcard){
        srand (time(NULL));
        randcard = rand() % 52;
        cout << randcard << " " << Cards[randcard]->getValue() << endl;
        if(Cards[randcard] != NULL){
            Cards[randcard] = NULL;
            goodcard = true;
        }
    }
    NumCards--;
    return Cards[randcard];
}

void Deck::ShuffleDeck(){
    int Value;
    string Suit;
    string Type;
    NumCards = 52;
    for(int i=0; i<NumCards; i++){
        if(i%13 == 0){
            Value = 11;
            Type = "Ace";
        }else if(i%13 == 1){
            Value = 2;
            Type = "Two";
        }else if(i%13 == 2){
            Value = 3;
            Type = "Three";
        }else if(i%13 == 3){
            Value = 4;
            Type = "Four";
        }else if(i%13 == 4){
            Value = 5;
            Type = "Five";
        }else if(i%13 == 5){
            Value = 6;
            Type = "Six";
        }else if(i%13 == 6){
            Value = 7;
            Type = "Seven";
        }else if(i%13 == 7){
            Value = 8;
            Type = "Eight";
        }else if(i%13 == 8){
            Value = 9;
            Type = "Nine";
        }else if(i%13 == 9){
            Value = 10;
            Type = "Ten";
        }else if(i%13 == 10){
            Value = 10;
            Type = "Jack";
        }else if(i%13 == 11){
            Value = 10;
            Type = "Queen";
        }else if(i%13 == 12){
            Value = 10;
            Type = "King";
        }
        if(i<13){
            Suit = "Hearts";
        }else if(i<26){
            Suit = "Diamonds";
        }else if(i<39){
            Suit = "Clubs";
        }else if(i<52){
            Suit = "Spades";
        }
        Cards[i] = new Card(Value, Suit, Type);
    }
}

void Deck::PrintDeck(){
    for (int i=0; i<NumCards; i++){
        cout << Cards[i]->getType() << " of " << Cards[i]->getSuit() << endl;
    }
}