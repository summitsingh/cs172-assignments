#ifndef card_h
#define card_h

#include <iostream>
#include <sstream>
#include <map>
using namespace std;

enum Rank { TWO, THREE, FOUR, FIVE, SIX, SEVEN, EIGHT, NINE, TEN, JACK, QUEEN, KING, ACE };
enum Suit { CLUBS, SPADES, DIAMONDS, HEARTS };

class card
{
	public:
	//default constructor
	card();

	//create a card with suit and rank
	card(Suit suit, Rank rank);

	//function to return rank
	Rank getRank() const;

	//function to return suit
	Suit getSuit() const;

	private:
	Rank rank_;
	Suit suit_;
};

//overload output operator <<
ostream & operator<<(ostream & os, const card & card);

//overload comparison operator ==
bool operator==(const card & a, const card & b);

//overload comparison operator <
bool operator<(const card & a, const card & b);

//overload comparison operator >
bool operator>(const card & a, const card & b);

#endif