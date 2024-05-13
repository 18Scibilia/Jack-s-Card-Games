//Libraries
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <ctime>
#include <cstdlib>
#include "Player.h"
//All of these are essential for your pieces of code, human!

//using namespace std;
//void HANDLE();
//void FlushConsoleInputBuffer();
//bool hConsole();
//bool GetStdHandle();
//void STD_OUTPUT_HANDLE();
//void Card();
//void hand();
//void name();
//void newHand();

Player::Player(string name)
{
	this->playerHand = {};
	this->name = name;
}

vector<Card> Player::GetPlayerHand()
{
	return playerHand;
}

void Player::displayHand()
{
	for (int x = 0; x < playerHand.size(); x++)
	{
		playerHand[x].Outputcard(); //This passes through the hand vector before displaying which card is in it
	}
}

int Player::tallyScore()
{
	int value = 0;
	for (int x = 0; x < playerHand.size(); x++)
	{
		value += playerHand[x].GetValue();
	}
	return value;
}

void Player::clearPlayer()
{
	playerHand.clear();
}

string Player::getName()
{
	return name;
}

int Player::GetTotalCards() {
	return playerHand.size();
}


void Player::AddCardToHand(Card newCard) {
	playerHand.push_back(newCard);
}