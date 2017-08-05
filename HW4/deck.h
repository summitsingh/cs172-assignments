#ifndef deck_h
#define deck_h

#include "card.h"
#include <vector>
#include <ctime>

class deck
{
	public:
	//default constructor
	deck();

	//function to shuffle deck
	void shuffle();

	//function to deal card
	card returnCard();

	//function to return deck
	deck returnDeck(deck &cards, int n);

	//function to return number of cards left
	int numberOfCards() const;

	//function to add card
	void addCard(card card);

	private:
	//vector to store cards
	vector<card> cards_;
};

#endif