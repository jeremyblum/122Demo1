#ifndef CARD_H
#define CARD_H

#include <string>
#include <cassert>

class Card {
public:
	Card(int id);
	Card(int suit, int rank);

	char getRank() const {
		std::string ranks = "23456789TJQKA";
		return ranks[mRank];
	}

	char getSuit() const {
		std::string suits = "CDHS";
		return suits[mSuit];
	}

	bool isBetween(Card card1, Card card2) const;

	bool hasRankEqualTo(Card card) const;

	int differenceInRanks(Card other) const;

	std::string asString() const;

private:
	int mSuit;
	int mRank;
};

#endif