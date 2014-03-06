#include <string>

using namespace std;

class Card{
    private:
        int Value;
        string Suit;
        string Type;
    
    public:
        Card();
        Card(int Value, string suit, string Type);
        int getValue();
        string getSuit();
        string getType();

};