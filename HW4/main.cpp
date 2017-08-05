#include "deck.h"
#include "card.h"

//war function
int war(deck & p1deck, deck & p2deck, int & i)
{
	if (p1deck.numberOfCards() <= 1)
	{
		return 0;
	}
	if (p2deck.numberOfCards() <= 1)
	{
		i = 1;
		return 0;
	}
	//both players draw 2 new cards to top of deck, first card placed down, 2nd card face up
	card p1_u = p1deck.returnCard();
	card p1_d = p1deck.returnCard();
	card p2_u = p2deck.returnCard();
	card p2_d = p2deck.returnCard();
	//output player 1/2 face up (2nd) cards to compare
	cout << "WAR!!" << endl << p1_u << " vs " << p2_u << endl;
	if (p1_u > p2_u)
	{
		p1deck.addCard(p1_u);
		p1deck.addCard(p1_d);
		p1deck.addCard(p2_u);
		p1deck.addCard(p2_d);
		i = 1;
		return 0;
	}
	else
	{
		p2deck.addCard(p1_u);
		p2deck.addCard(p1_d);
		p2deck.addCard(p2_u);
		p2deck.addCard(p2_d);
		return 0;
	}
	//recurrsion
	war(p1deck, p2deck, i);
	if (i == 1)
	{
		p1deck.addCard(p2_u);
		p1deck.addCard(p2_d);
		p1deck.addCard(p1_u);
		p1deck.addCard(p1_d);
	}
	else
	{
		p2deck.addCard(p1_u);
		p2deck.addCard(p1_d);
		p2deck.addCard(p2_u);
		p2deck.addCard(p2_d);
	}
	return 0;
}

//function to create deck with 52 cards
void createDeck(deck &cards)
{
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 13; j++)
		{
			cards.addCard(card((Suit)i, (Rank)j));
		}
	}
}

//function to announce a winner if someone doesn't have enough cards
void announceWinner(deck & p1deck, deck & p2deck)
{
	if (p2deck.numberOfCards() == 0)
	{
		cout << "Player 1 Wins!" << endl;
	}
	else
	{
		cout << "Player 2 Wins!" << endl;
	}
}

void main()
{
	//function to seed new random numbers
	srand(time(NULL));
	//create war game deck and shuffle
	deck warDeck;
	createDeck(warDeck);
	warDeck.shuffle();
	//deal each player half the cards
	deck p1deck;
	deck p2deck;
	warDeck.returnDeck(p1deck, 26);
	warDeck.returnDeck(p2deck, 26);
	//loop till both players have card
	while (p1deck.numberOfCards() > 0 && p2deck.numberOfCards() > 0)
	{
		//each player takes top card from their deck
		card p1 = p1deck.returnCard();
		card p2 = p2deck.returnCard();
		cout << p1 << " vs " << p2 << endl;
		//player with largest by rank takes both cards, add to bottom of deck, larger rank is added to bottom of deck first
		if (p1 > p2)
		{
			p1deck.addCard(p2);
			p1deck.addCard(p1);
		}
		else if (p1 < p2)
		{
			p2deck.addCard(p1);
			p2deck.addCard(p2);
		}
		else if (p1 == p2)
		{
			//WAR! - starts from here (war is a function with recursion)
			int i;
			war(p1deck, p2deck, i);
			if (i == 1)
			{
				p1deck.addCard(p2);
				p1deck.addCard(p1);
			}
			else
			{
				p2deck.addCard(p1);
				p2deck.addCard(p2);
			}
		}
	}
	//function to announce winner
	announceWinner(p1deck, p2deck);
}