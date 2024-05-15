#include "BlackjackGame.h"

void BlackjackGame::play()
{
	Player user = Player("Doctor Who");
	Player dealer = Player("Toymaker");
	int userHandTotal = 0;
	int dealerHandTotal = 21;
	bool userHits=false;
	string response;

	Deck blackjackDeck = Deck();
	blackjackDeck.fillDeck();
	blackjackDeck.shuffle();

	//Introduction
	cout << "So, now we are playing Blackjack." << endl;
	cout << "Do you wish to hear the rules?" << endl;
	cin >> response;
	if (response == "Yes" || response == "YES" || response == "yes" || response == "Yeah" || response == "yeah" || response == "You bet" || response == "totally") {
		cout << "Very well. I will explain the rules of Blackjack to you now." << endl;
		cout << "The main goal in Blackjack is to have a card total that is less than or equal to 21." << endl;
		cout << "You start with two cards in your hand, and the card number is the total." << endl;
		cout << "For example, if one card you have is a 10 and the other os a 5, then your total is 15." << endl;
		cout << "If your card total is less than 21, you can choose to either stick or hit." << endl;
		cout << "If you choose to hit, then another card will be added to your hand." << endl;
		cout << "If your card total is 21, then you have Blackjack and you win." << endl;
		cout << "But if your card total is over 21, then it is bust and you have lost." << endl;
		cout << "For the record, picture cards like the Jack, Queen or King are worth 10, and Aces are worth one." << endl;
		cout << "With that, let us begin." << endl;
	}
	else if (response == "No" || response == "NO" || response == "no" || response == "Nope" || response == "nope" || response == "No way") {
		cout << "Oh, you wish to jumnp straight into the game?" << endl;
		cout << "With that, let us begin." << endl;
	}

	//in a round
	user.AddCardToHand(blackjackDeck.drawCard());
	user.AddCardToHand(blackjackDeck.drawCard());

	dealer.AddCardToHand(blackjackDeck.drawCard());
	dealer.AddCardToHand(blackjackDeck.drawCard());
	cout << user.tallyScore() << endl;
	cout << "Do wish to take a risk and hit?" << endl;
	cin >> response;
	if (response == "Yes" || response == "YES" || response == "yes" || response == "Yeah" || response == "yeah"||response == "You bet"||response == "totally") {
		cout << "Very well. Here is another card for you." << endl;
		user.AddCardToHand(blackjackDeck.drawCard());
		cout << user.tallyScore() << endl;
		if (user.tallyScore() > 21) {
			cout << "Oh, dear. Your total has gone over 21. You have gone bust!" << endl;
		}
		else if (user.tallyScore() == 21) {
			cout << "Congratulations! You have won Blackjack and defeated me!" << endl;
			cout << "But mark my words, we shall meet again!" << endl;
		}
		else if (user.tallyScore() < 21) {
			cout << "Ah, it appears that even with your additional card, it is still less than 21." << endl;
			cout << "Do you wish to hit again?" << endl;
			cin >> response;
			if (response == "Yes" || response == "YES" || response == "yes" || response == "Yeah" || response == "yeah" || response == "You bet" || response == "totally") {
				cout << "Very well. Here is another card for you." << endl;
				user.AddCardToHand(blackjackDeck.drawCard());
				cout << user.tallyScore() << endl;
				if (user.tallyScore() > 21) {
					cout << "Oh, dear. Your total has gone over 21. You have gone bust!" << endl;
				}
				else if (user.tallyScore() == 21) {
					cout << "Congratulations! You have won Blackjack and defeated me!" << endl;
					cout << "But mark my words, we shall meet again!" << endl;
				}
				else if (user.tallyScore() < 21) {
					cout << "You have hit twice now, and the total still isn't 21." << endl;
					cout << "If you wish to hit one more time, there's a small chance you may get Blackjack this time." << endl;
					cout << "But if the total goes over 21, then you will go bust and I will win." << endl;
					cout << "So, what is your answer? Will you twist or not?" << endl;
					cin >> response;
					if (response == "Yes" || response == "YES" || response == "yes" || response == "Yeah" || response == "yeah" || response == "You bet" || response == "totally") {
						cout << "Very well. Here is another card for you." << endl;
						user.AddCardToHand(blackjackDeck.drawCard());
						cout << user.tallyScore() << endl;
						if (user.tallyScore() > 21) {
							cout << "Oh, dear. Your total has gone over 21. You have gone bust!" << endl;
						}
						else if (user.tallyScore() == 21) {
							cout << "Congratulations! You have won Blackjack and defeated me!" << endl;
							cout << "But mark my words, we shall meet again!" << endl;
						}
						else if (user.tallyScore() < 21) {
							cout << "That is the third time you have hit and still no Blackjack for you." << endl;
							cout << "I guess I can allow you to hit one more time." << endl;
							cout << "Will you accept this last offer to twist?" << endl;
							cin >> response;
							if (response == "Yes" || response == "YES" || response == "yes" || response == "Yeah" || response == "yeah" || response == "You bet" || response == "totally") {
								cout << "Very well. Here is one more card for you." << endl;
								user.AddCardToHand(blackjackDeck.drawCard());
								cout << user.tallyScore() << endl;
								if (user.tallyScore() > 21) {
									cout << "Oh, dear. Your total has gone over 21. You have gone bust!" << endl;
								}
								else if (user.tallyScore() == 21) {
									cout << "Congratulations! You have won Blackjack and defeated me!" << endl;
									cout << "But mark my words, we shall meet again!" << endl;
								}
							}
							else if (response == "No" || response == "NO" || response == "no" || response == "Nope" || response == "nope" || response == "No way") {
								cout << "OK, then. That is your final total of all. Jah?" << endl;
								cout << "You may not have won Blackjack, but you still choose to leave with your life.";
							}
						}
					}
					else if (response == "No" || response == "NO" || response == "no" || response == "Nope" || response == "nope" || response == "No way") {
						cout << "OK, then. That is your final total of all. Jah?" << endl;
						cout << "You may not have won Blackjack, but you still choose to leave with your life.";
					}
				}
			} else if (response == "No" || response == "NO" || response == "no" || response == "Nope" || response == "nope" || response == "No way") {
				cout << "OK, then. That is your final total of all. Jah?" << endl;
				cout << "You may not have won Blackjack, but you still choose to leave with your life.";
			}
		}
	}
	else if (response == "No" || response == "NO" || response == "no" || response == "Nope" || response == "nope" || response == "No way") {
		cout << "OK, then. That is your final total of all. Jah?" << endl;
		cout << "You may not have won Blackjack, but you still choose to leave with your life.";
	}
	cout << "Now that your cards have been dealt, it is my turn." << endl;
	cout << dealer.tallyScore() << endl;
	/*
	while (userHits = true) {
		user.AddCardToHand(blackjackDeck.drawCard());
		//userHandTotal.drawCard
	}
	while (dealerHandTotal <= 17)
		//output(userHand.total())
		//dealerHandTotal.drawCard(blackjackDeck);
	if (userHandTotal<=dealerHandTotal){

	}
		//Dealer wins
	else {

	}*/
		//User wins
}
