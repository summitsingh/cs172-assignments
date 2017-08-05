#include "deck.h"

//default constructor
deck::deck()
{

}

//function to shuffle deck
void deck::shuffle()
{
	for (unsigned int i = 0; i < (cards_.size() - 1); i++)
	{
		int j = rand() % (i + 1);
		//swap cards
		card temp = cards_[j];
		cards_[j] = cards_[i];
		cards_[i] = temp;
	}
}

//function to return number of cards left
int deck::numberOfCards() const
{
	return cards_.size();
}

//function to deal card
card deck::returnCard()
{
	card temp = cards_[0];
	cards_.erase(cards_.begin());
	return temp;
}

//function to return deck
deck deck::returnDeck(deck &cards, int n)
{
	for (int i = 0; i < n; i++)
	{
		cards.addCard(cards_.front());
		cards_.erase(cards_.begin());
	}
	return cards;
}

//function to add card
void deck::addCard(card card)
{
	cards_.push_back(card);
}