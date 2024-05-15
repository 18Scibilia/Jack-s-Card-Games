#include "Solitaire.h"
#include "SolitaireDraw.h"
#include "Deck.h"
//#include "Board.h"
#include <string>

void Solitaire::playSolitaire()
{
	bool hear_rules = true;
    bool blackjack_game = true;
	Player user = Player ("Doctor Who");
    string player_card, cell1, cell2;
    string dealer_card;
	string response;
	Deck SolitaireDeck = Deck();
	SolitaireDeck.shuffle();

    cout << "So, now we are playing Solitaire." << endl;
    cout << "More specifically, classic Klondike Solitaire." << endl;
    cout << "Do you wish to hear the rules?" << endl;
	cin >> response;

    if (response == "No" || response == "no" || response == "No" || response == "Nah"||response == "no way"||response=="No way")
    {
        hear_rules = false;
        cout << "You wish to just play? You are brave, aren't you?" << endl;
        cout << "With that, let us begin." << endl;
    } else if (response == "Yes" || response == "yes" || response == "YES" || response == "Yeah" || response == "Totally" || response == "Certainly"){
		hear_rules = true;
		cout << "Very well. I shall explain the rules of Klondike Solitaire to you." << endl;
		cout << "The main objective of Klondike Solitaire is to make four piles of cards in ascending order." << endl;
		cout << "On each of the cards, you must place a card that is one lower than the card that is face up." << endl;
		cout << "You must alternate the card colours as you go doen the line." << endl;
		cout << "For example, a red card must be followed by a black card." << endl;
		cout << "Remember that you can only move cards that are face up." << endl;
		cout << "Any card that you turn over from the stockpile becomes playable in the waste pile." << endl;
		cout << "If any of the cards that are face up at the start are aces, move them immediately into the foundation piles." << endl;
		cout << "The cards in the tableau are arranged by colour and rank." << endl;
		cout << "Ace, 2, 3, 4, 5, 6, 7, 8, 9, 10, Jack, Queen, King. That is the card ranking from lowest to highest." << endl;
		cout << "If you end up going through the whole stockpile, you can turn the waste pile over to reuse it." << endl;
		cout << "However, if you go through the stockpile with no new plays, the game is over." << endl;
		cout << "Hope you've understood all of this. Now, let's play!" << endl;
	}
	bool keepGoing = true;
	bool win = false;
	bool fullBoard = false;
	bool playSolitaire = true;
	while (playSolitaire == true)
	{
		while (fullBoard == false) {
			//drawCard().Outputcard();
			//player_card = SolitaireDeck.drawCard().Outputcard();
		}
		while (keepGoing == true) {
			cin >> cell1;
			if (cell1 == "A1" || cell1 == "B1" || cell1 == "C1" || cell1 == "D1" ||
				cell1 == "A2" || cell1 == "B2" || cell1 == "C2" || cell1 == "D2" ||
				cell1 == "A3" || cell1 == "B3" || cell1 == "C3" || cell1 == "D3" ||
				cell1 == "A4" || cell1 == "B4" || cell1 == "C4" || cell1 == "D4") {
				//NOTHING HERE SO PROGRAM CAN PROCEED
			}
			else {
				continue;
			}
		}
	}
}

/*
int game()
{

	Deck deck;  // creates deck object
	//Card currentCard;  //creates card object
	//Rules myRules; // creates rules object
	//deck.GenDeck();  // generates a deck

	//shuffles the deck 1000 times
	for (int i = 0; i < 1000; i++) {
		deck.shuffle();
	}
}
*/


/*
	string aCard, cell1, cell2;
	
	Board myBoard;  //CREATES BOARD OBJECT
	myBoard.DrawBoard();
	myBoard.gotoxy(95, 1);
	cout << "SOLITARE" << endl;
	myBoard.gotoxy(98, 2);
	cout << "by" << endl;
	myBoard.gotoxy(95, 3);
	cout << "Derek Wu" << endl;
	bool checkBoard = false;
	bool win = false;
	bool playGame = true;
	while ( playGame == true) {  // WHILE THE GAME IS BEING PLAYED
		while (checkBoard == false) {  // WHILE THE BOARD IS NOT FULL, ALLOW PLAYER TO FILL IT WITH CARDS
			aCard = deck.DealCard().Print();
			myRules.SendTo(aCard);
			myBoard.gotoxy(55, 19);
			cout << "   ";
			if (deck.GetCurrentCard() == 51) {  // STARTS AT 0 AND INCREMENTS 1 AFTER EACH CARD IS PLAYED
				//WHEN IT REACHES 51, THE PLAYER WINS
				win = true;
				playGame = false;
			}
			checkBoard = myRules.BoardFull();
	
		}
		if (myRules.PairsLeft() == false) {  // IF NO PAIRS LEFT, BREAK OUT OF LOOP

			break;
		}
		while ( keepGoing == true) {  // WHILE PLAYER IS ALLOWED TO CLEAR CARDS AND PAIRS EXIST
			myBoard.gotoxy(81, 9);
			cout << "                                ";
			myBoard.gotoxy(81, 10);
			cout << "Enter Cell for Cell 1(All Caps):      " << endl;
			myBoard.gotoxy(81, 11);
			cout << "    ";  
			myBoard.gotoxy(81, 11);
			cin >> cell1;
			if (cell1 == "A1" || cell1 == "B1" || cell1 == "C1" || cell1 == "D1" ||
				cell1 == "A2" || cell1 == "B2" || cell1 == "C2" || cell1 == "D2" ||
				cell1 == "A3" || cell1 == "B3" || cell1 == "C3" || cell1 == "D3" ||
				cell1 == "A4" || cell1 == "B4" || cell1 == "C4" || cell1 == "D4") {
				//NOTHING HERE SO PROGRAM CAN PROCEED
			}
			else {
				myBoard.gotoxy(81, 9);
				cout << "Invalid entry, please try again:";
				myBoard.gotoxy(81, 10);
				cout << "                  ";
				myBoard.gotoxy(81, 10);
				system("Pause");
				myBoard.gotoxy(81, 11);
				cout << "             ";
				continue;
			}
			myBoard.gotoxy(81, 10);
			cout << "Enter 2nd Cell(All Caps, N if none):   " << endl;  // if cell2 == null, check if 10 card
			myBoard.gotoxy(81, 11);
			cout << "         ";  
			myBoard.gotoxy(81, 11);
			cin >> cell2;
			if (cell2 == "A1" || cell2 == "B1" || cell2 == "C1" || cell2 == "D1" ||
				cell2 == "A2" || cell2 == "B2" || cell2 == "C2" || cell2 == "D2" ||
				cell2 == "A3" || cell2 == "B3" || cell2 == "C3" || cell2 == "D3" ||
				cell2 == "A4" || cell2 == "B4" || cell2 == "C4" || cell2 == "D4" || cell2 == "N") {
				//NOTHING HERE SO PROGRAM CAN PROCEED
			}
			else {
				myBoard.gotoxy(81, 9);
				cout << "Invalid entry, please try again:";
				myBoard.gotoxy(81, 10);
				system("Pause");
				continue;
			}
			if (cell2 == "N") {
				if (myRules.EqualsTen(cell1, cell2) != true) {
					myBoard.gotoxy(81, 9);
					cout << "Invalid entry, please try again:   ";
					myBoard.gotoxy(81, 10);
					system("Pause");
					continue;
				}
			}
			else if ((myRules.NeighborCards(cell1, cell2)) == true) {
				if (myRules.EqualsTen(cell1, cell2) != true) {
					myBoard.gotoxy(81, 9);
					cout << "Invalid entry, please try again:   ";
					myBoard.gotoxy(81, 10);
					system("pause");
					continue;
				}
			}

			if (myRules.PairsLeft() == true) {  //IF THERE ARE PAIRS LEFT...
				keepGoing = true;  // STAY IN THE LOOP
			}
			else {
				keepGoing = false;  // BREAK OUT OF THE LOOP
			}
		}
		checkBoard = myRules.BoardFull();
		if (checkBoard == false) {  // IF BOARD IS NOT FULL, KEEP PLAYING
			keepGoing = true;
		}
		else {
			playGame = false;  // GAME IS OVER
		}
	}
	if (win == false) {  // PLAYER LOSES 
		system("CLS");
		cout << "YOU LOSE!" << endl;
		cout << "Num of cards taken from deck: " << deck.GetCurrentCard() + 1 << endl;
		system("PAUSE");
	}
	else if (win == true) { // PLAYER WINS
		system("CLS");
		cout << "YOU WIN!" << endl;
		system("Pause");
	}

	return 0;
}
	*/
