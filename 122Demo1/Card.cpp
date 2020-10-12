#include "Card.h"
#include <cstdlib>

using namespace std;

Card::Card(int suit, int rank) {
	assert(suit >= 0 && rank >= 0);
	mSuit = suit;
	mRank = rank;
}

Card::Card(int id) {
	assert(id >= 0 && id < 52);
	mSuit = id / 13;
	mRank = id % 13;
}


string Card::asString() const {
	string retVal = "";
	retVal += getRank();
	retVal += getSuit();
	return retVal;
}

bool Card::isBetween(Card card1, Card card2) const {
	return (card1.mRank < mRank&& mRank < card2.mRank) ||
		(card1.mRank > mRank && mRank > card2.mRank);
}

bool Card::hasRankEqualTo(Card card) const {
	return card.mRank == mRank;
}

int Card::differenceInRanks(Card card) const {
	return abs(card.mRank - mRank);
}