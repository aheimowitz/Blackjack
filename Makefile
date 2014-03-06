all: blackjack

blackjack: main.o Card.o Deck.o
	g++ main.o Card.o Deck.o -o blackjack
    
main.o: main.cpp
	g++ -c main.cpp
    
Card.o: Card.cpp Card.h
	g++ -c Card.cpp
    
Deck.o: Deck.cpp Deck.h
	g++ -c Deck.cpp
    
clean:
	rm -f *.o blackjack