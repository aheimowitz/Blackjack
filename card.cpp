
#include "Card.h"
using namespace std;

Card::Card(){
    Value = 0;
    Suit = "";
    Type = "";
}

Card::Card(int Valuein, string Suitin, string Typein){
    Value = Valuein;
    Suit = Suitin;
    Type = Typein;
}

int Card::getValue(){
    return Value;
}

string Card::getSuit(){
    return Suit;
}

string Card::getType(){
    return Type;
}

