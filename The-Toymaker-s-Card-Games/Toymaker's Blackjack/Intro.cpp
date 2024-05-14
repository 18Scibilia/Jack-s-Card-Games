#include "BlackjackGame.h"
#include "Solitaire.h"
#include <iostream>
#include <stdlib.h>

const int spacer_length = 90;
string response;


using namespace std;

int main() {
	bool game_on = true;
	srand(unsigned((time(NULL))));
	//Intro message from Neil Patrick Harris
	cout << "Ah, hello there, human." << endl;
	cout << "You find yourself before me..." << endl;
	cout << "The Toymaker." << endl;
	cout << "I wish to play a game with you." << endl;
	cout << "If you win, then you will be free to go as tou see fit." << endl;
	cout << "If I win, though, you will spend the rest of eternity as my new plaything." << endl;
	cout << "Do you accept my challenge?" << endl;
	cin >> response;

	if (response == "yes")
	{
		cout << "I will let you decide what we play now. Either Blackjack or Solitaire." << endl;
		cout << "Of course, if you with to leave now, then I won't stop you." << endl;
		cout << "Press 1 for Blackjack." << endl;
		cout << "Press 2 for Solitaire." << endl;
		cout << "Say neither to walk away with your life." << endl;
		cin >> response;

		if (response == "Neither"||response=="neither"||response=="NEITHER"||response=="0")
		{
			game_on = false;
			cout << "Oh, that is a shame." << endl;
			cout << "If you ever change your mind, I will be here." << endl;
		}
		else if (response == "Blackjack"||response == "blackjack"||response == "1")
		{
			cout << "Very well. We are playing blackjack." << endl;
		}
		else if (response == "Solitaire"||response == "solitaire"||response == "2")
		{
			cout << "Very well. We are playing solitaire." << endl;
		}
		else
		{
			cout << "That is not an answer. Make a different choice." << endl;
		}
	}
	else if (response == "no" || response == "No") {
		cout << "Oh, that is a shame." << endl;
		cout << "If you ever change your mind, I will be here." << endl;
	}
}
/*
void spacer()
{
	for (int i = 0; i < spacer_length; i++)
	{
		cout << "-";
	}
	cout << endl;
}

int get_input(int low_range, int high_range)
{
	int input;
	while (true)
	{
		cin >> input;
		if (!cin)
		{
			cout << "That response is not acceptable! Say something else!";
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			continue;
		}
		else if (input < low_range || input > high_range)
		{
			cout << "That response is not acceptable! Say something else!";
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			continue;
		}
		break;
	}
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	cin.clear();
	return input;
}
*/
