#ifndef DECK_H
#define DECK_H

#include "Card.h"

class Deck {
public:
	Deck();

	Card dealCard();

	void shuffle();

	int cardsRemaining() const { return 52 - top; }

private:
	Card* cards[52];
	int top;
};

#endif
