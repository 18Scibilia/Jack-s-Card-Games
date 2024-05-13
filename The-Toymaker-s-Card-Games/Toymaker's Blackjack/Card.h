#pragma once
#include <string>
#include <list>
#include <queue>
#include "Board.h"

#define LIGHT_BLUE 11
#define LIGHT_RED 12
#define WHITE_COLOR 15

using namespace std;

class Card
{
private:
	int value;
	char suit;

public:
	enum SuitNames : char
	{
		Diamond = 'D',
		Spade = 'S',
		Heart = 'H',
		Club = 'C',
		Ace = 'A',
		Joker = 'JO',
		Jack = 'JA',
		Queen = 'Q',
		King = 'K',
	};
	//These are the 4 different card suits that are found in a pack of cards, along with the special cards. 
	//With Both Joker and Jack beginning in the letter J, I decided to add in the second letter of each name to avoid confusion.
	Card(int newValue, char newSuit);

	int GetValue();
	void SetValue(int newValue);
	void SetSuit(char newSuit);
	char GetSuit();
	void Outputcard();
};
