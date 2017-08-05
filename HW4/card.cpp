#include "card.h"

//create a card with suit and rank
card::card(Suit suit, Rank rank)
{
	rank_ = rank;
	suit_ = suit;
}

//function to return rank
Rank card::getRank() const
{
	return rank_;
}

//function to return suit
Suit card::getSuit() const
{
	return suit_;
}

//overload output operator <<
ostream & operator<<(ostream & os, const card & card)
{
	map<Suit, string> suit = { { CLUBS, "C" }, { SPADES, "S" }, { DIAMONDS, "D" }, { HEARTS, "H" } };
	map<Rank, string> rank = { { TWO, "2" }, { THREE, "3" }, { FOUR, "4" }, {FIVE, "5"}, {SIX, "6"}, {SEVEN, "7"}, {EIGHT, "8"}, {NINE, "9"}, {TEN, "10"}, {JACK, "J"}, {QUEEN, "Q"}, {KING, "K"}, { ACE, "A" } };
	os << suit[card.getSuit()] << rank[card.getRank()] << " ";
	return os;
}

//overload comparison operator ==
bool operator==(const card & a, const card & b)
{
	return a.getRank() == b.getRank();
}

//overload comparison operator <
bool operator<(const card & a, const card & b)
{
	return a.getRank() < b.getRank();
}

//overload comparison operator >
bool operator>(const card & a, const card & b)
{
	return a.getRank() > b.getRank();
}