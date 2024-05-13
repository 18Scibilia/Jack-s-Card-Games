#include <iostream>
#include <string>
#include "Card.h"

using namespace std;


Card::Card(int newValue, char newSuit) {
	value = newValue;
	suit = newSuit;
}

int Card::GetValue() {
	return value;
}
void Card::SetValue(int newValue) {
	value = newValue;
}
char Card::GetSuit() {
	return suit;
}
void Card::SetSuit(char newSuit) {
	suit = newSuit;
}
void Card::Outputcard() {
	cout << "Card value is: " << value << " of " << suit << endl;
}

