#pragma once
#include "Card.h"
#include <vector>

using namespace std;

class Deck
{
public:
	vector <Card> deck;
	//int testvariable;
	//I try to create the cards for the deck
	//for (int CardValue = 0; CardValue < 13; CardValue++) {
		//for (int SuitInt = 0; SuitInt < 5; SuitInt++) {
			//Suit CardSuit;

			//switch (SuitInt) {
			//case 1:
				//CardSuit = Suit::Clubs;
				//break;
			//case 2:
				//CardSuit = Suit::Hearts;
				//break;
			//case 3:
				//CardSuit = Suit::Spades;
				//break;
			//default:
				//CardSuit = Suit::Diamonds;
				//break;
			//}
	Deck();
	void fillDeck();
	//Not much is needed for these voids in the Deck header
	void shuffle();
	Card RemoveCard();
	vector<Card> GetAllCards();
	Card drawCard();

};
