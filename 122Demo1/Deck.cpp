
#include "Deck.h"

Deck::Deck() {
	for (int i = 0; i < 52; i++) {
		cards[i] = new Card(i);
	}
	top = 0;
}

Card Deck::dealCard() {
	Card* topCard = cards[top];
	top++;
	return *topCard;
}

void Deck::shuffle() {
	for (int i = 0; i < 52; i++) {
		int j = rand() % 52;
		Card* tmp = cards[i];
		cards[i] = cards[j];
		cards[j] = tmp;
	}
	top = 0;
}