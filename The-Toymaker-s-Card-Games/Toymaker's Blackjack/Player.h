#pragma once
#include<iostream>
#include<string>
#include<algorithm>
#include "Card.h"


using namespace std;
class Player
{
	vector<Card> playerHand;
	string name;

public:
	Player(string name);

	vector<Card> GetPlayerHand();

	void AddCardToHand(Card newCard);
	void displayHand();
	int tallyScore();
	void clearPlayer();
	string getName();
	int GetTotalCards();
};
