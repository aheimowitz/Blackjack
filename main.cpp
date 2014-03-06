#include <string>
#include <iostream>

#include "Deck.h"

int main(){
	bool contplaying = true;
    Deck* d = new Deck();
    while(contplaying){
    	Card* player1 = d->getCard();
    	Card* dealer1 = d->getCard();
    	Card* player2 = d->getCard();
    	Card* dealer2 = d->getCard();
    	int playtot = player1->getValue() + player2->getValue();
    	int dealtot = dealer1->getValue() + dealer2->getValue();
    	cout << "Dealer shows a " << dealer1->getValue() << endl;
    	cout << "You show a " << playtot << endl;
    	bool hit = true;
    	while(hit){
    		Card* newcard = d->getCard();
    		playtot+= newcard->getValue();
    		if(playtot > 21){
    			cout << "You show a " << playtot << " you bust" << endl;
    			hit = false;
    		}else{
    			cout << "You show a " << playtot << " would you like to hit? (y/n)";
    			string temp;
    			cin >> temp;
    			if(temp == "n"){
    				hit = false;
    			}
    		}
    	}
    	while(dealtot<17){
    		dealtot += d->getCard()->getValue();
    		cout << "Dealer shows a " << dealtot << endl;
    	}
    	if(dealtot <= 21){
    		if(dealtot > playtot){
    			cout << "Dealer wins" << endl;
    		}else if (playtot > dealtot)
    		{
    			cout << "Player wins" << endl;
    		}else{
    			cout << "Push" << endl;
    		}
    	}
    	cout << "Would you like to play again?(y/n) ";
    	string tempcontp;
    	cin >> tempcontp;
    	if(tempcontp == "n"){
    		contplaying = false;
    	}

    }
}

