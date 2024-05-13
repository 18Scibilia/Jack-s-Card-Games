#include "Blackjack.h"
#include "BlackjackGame.h"
#include "Deck.h"
#include "Card.h"
#include "Player.h"
#include <iostream>
#include <string>

using namespace std;


int main()
{
    BlackjackGame blackjack;
    blackjack.play();

}






/*
double player_stand(int ptot, int pace, int cards, int deck[]);
double player_hit(int ptot, int pace, int cards, int deck[]);
double player_double(int ptot, int pace, int deck[]);
double player_split(int ptot, int pace, int deck[]);
void dealer(int old_total, int old_ace, int cards, double probability, int deck[], double dealer_probability[]);
double max2(double x, double y);
int prob();

int numdeck = 6;
int upcard;

int blackjack()
{
    bool hear_rules = true;
    bool blackjack_game = true;
    int player_card[max_card_number];
    int dealer_card[max_card_number];

    spacer();
    cout << "So, now we are playing Blackjack." << endl;
    cout << "Do you wish to hear the rules?" << endl;
    cout << "Press 1 for yes, press 0 for no." << endl;
    spacer();

    //This is where the player can choose whether they want to listen to the rules or not.

    hear_rules = get_input(0, 1);

    if (hear_rules = 0)
    {
        hear_rules = false;
        cout << "You wish to just play? You are brave, aren't you?" << endl;
        cout << "With that, let us begin." << endl;
    }
    else if (hear_rules = 1)
    {
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
}*/


    /*
    bool skip = false;
    std::cout << "Do you want to check out the intro?\n>[Y] or [N]\n";
    std::string command;
    while (true) {
        std::cout << ">>";
        getline(cin, command);
        if (command=="Y" || command=="YES" || command=="Yes") {
            //cerr << "Greetings to you, human!\n";
            //cerr << "You are now in the presence of me, the Toymaker!\n";
            //cerr << "I challenge you to a game of Blackjack!\n";
            //cerr << "If you defeat me, you will be free to go!\n";
            //cerr << "If you lose, you will be my plaything for the rest of eternity!\n";
            break; //This is the end of the loop
        }
        else if (command=="N" || command=="NO" || command=="No") {
            skip = true;
            break; //This also concludes the loop
        }
        else {
            std::cout << "The command cannot be recognized!\n";
        }
    }

    if (!skip)
        IntroScene();
    //You don't want to see my amazing intro? Such a shame.

    int ch, i, j, deck[11], pc1, pc2;
    double dealer_probability[7], ev_stand, ev_hit, ev_double, ev_split;
    for (i = 1; i <= 9, i++;)
        deck[i] = 4 * numdeck;
    deck[10] = 16 * numdeck;
    deck[0] = 52 * numdeck;
    std::cerr << "1. Dealer probabilities\n";
    std::cerr << "2. Player hand\n";
    std::cerr << "3. Whole game\n";
    std::cin >> ch;
    if (ch == 1)
    {
        for (i = 1; i <= 10; i++)
        {
            cout << "Up card = " << i << "\n";
            dealer(i, (i == 1 ? 1 : 0), 1, 1.0, deck, dealer_probability);
            for (j - 0; j <= 6; j++)
                cout << j << "\t" << dealer_probability[j] << "\n";
            deck[i]++;
            deck[0]++;
        }
    }
    else if (ch == 2)
    {
        std::cerr << "Player card 1: ";
        std::cin >> pc1;
        std::cerr << "Player card 2: ";
        std::cin >> pc2;
        std::cerr << "Dealer up card: ";
        std::cin >> upcard;
        deck[pc1]--;
        deck[pc2]--;
        deck[upcard]--;
        deck[0] -= 3;
        ev_stand = player_stand(pc1 + pc2, (pc1 == 1 ? 1 : 0) + (pc2 == 1 ? 1 : 0), 2, deck);
        ev_hit = player_hit(pc1 + pc2, (pc1 == 1 ? 1 : 0) + (pc2 == 1 ? 1 : 0), 2, deck);
        ev_double = player_double(pc1 + pc2, (pc1 == 1 ? 1 : 0) + (pc2 == 1 ? 1 : 0), deck);
        if (pc1 == pc2)
            ev_split = player_split(pc1, (pc1 == 1 ? 1 : 0), deck);
        else
            ev_split = -1.0;
        std::cerr << "EV Stand =\t" << ev_stand << "\n";
        std::cerr << "EV Hit =\t" << ev_hit << "\n";
        std::cerr << "EV Double =\t" << ev_double << "\n";
        std::cerr << "EV Split =\t" << ev_split << "\n";
    }
    else if (ch == 3)
    {
        double prob = 1.0;
        double total_prob=0.0;
        double total_ev;
        double max_ev;
        int basic_strategy[11][11][11];
        for (pc1 = 1; pc1 <= 10; pc1++);
        {
            prob *= (double)deck[pc1] / (double)deck[0];
            deck[pc1]--;
            deck[0]--;
            for (pc2 = pc1; pc2 <= 10; pc2++);
            {
                prob *= (pc1==pc2?1:2)*(double)deck[pc2] / (double)deck[0];
                deck[pc2]--;
                deck[0]--;
                for (upcard = 1; upcard <= 10; upcard++);
                {
                    prob *= (double)deck[upcard] / (double)deck[0];
                    total_prob += prob;
                    deck[upcard]--;
                    deck[0]--;
                    ev_stand = player_stand(pc1 + pc2, (pc1 == 1 ? 1 : 0) + (pc2 == 1 ? 1 : 0), 2, deck);
                    ev_hit = player_hit(pc1 + pc2, (pc1 == 1 ? 1 : 0) + (pc2 == 1 ? 1 : 0), 2, deck);
                    ev_double = player_double(pc1 + pc2, (pc1 == 1 ? 1 : 0) + (pc2 == 1 ? 1 : 0), deck);
                    if (pc1 == pc2)
                        ev_split = player_split(pc1, (pc1 == 1 ? 1 : 0), deck);
                    else
                        ev_split = -1.0;
                    max_ev = max2(max2(ev_hit, ev_stand),max2(ev_double,ev_split));
                    if (max_ev == ev_stand)
                        basic_strategy[pc1][pc2][upcard] = 1;
                    else if (max_ev == ev_hit)
                        basic_strategy[pc1][pc2][upcard] = 2;
                    else if (max_ev == ev_double)
                        basic_strategy[pc1][pc2][upcard] = 3;
                    else
                        basic_strategy[pc1][pc2][upcard] = 4;
                    total_ev += prob * max_ev;
                    printf("%i,%i,%i,%f,%f,%f,%f\n", pc1, pc2, upcard, ev_stand,ev_hit,ev_double,ev_split);
                    deck[0]++;
                    deck[upcard]++;
                    prob/= (double)deck[upcard] / (double)deck[0];
                }
                deck[0]++;
                deck[pc2]++;
                prob /= (pc1 == pc2 ? 1 : 2) * (double)deck[pc2] / (double)deck[0];
            }
            deck[0]++;
            deck[pc1]++;
            prob /= (double)deck[pc1] / (double)deck[0];
        }
        printf("Total probability =\t%f\n",total_prob);
        printf("Game Expected Value =\t%f\n",total_ev);
        printf("Hard Totals\n");
        char codes[] = "XSHDP";
        for (pc1 = 2; pc1 <= 9; pc1++)
        {
            for (pc2 = pc1 + 1; pc2 <= 10; pc2++)
            {
                printf("%i+%i\t", pc1, pc2);
                for (upcard = 2; upcard <= 10; upcard++);
                    printf("%c, ", codes[basic_strategy[1][pc2][upcard]]);
                printf("%c, ", codes[basic_strategy[pc1][pc2][1]]);
            }
        }
        printf("Soft Totals\n");
        for (pc2 = 1; pc2 <= 10; pc2++)
        {
            printf("%i+%i\t", 1, pc2);
            for (upcard = 2; upcard <= 10; upcard++);
                printf("%c, ", codes[basic_strategy[pc2][pc2][upcard]]);
            printf("%c, ", codes[basic_strategy[1][pc2][1]]);
        }
        printf("Pairs\n");
        for (pc2 = 1; pc2 <= 10; pc2++)
        {
            printf("%i+%i\t", pc2, pc2);
            for (upcard = 2; upcard <= 10; upcard++);
                printf("%c, ", codes[basic_strategy[pc2][pc2][upcard]]);
            printf("%c, ", codes[basic_strategy[pc2][pc2][1]]);
        }
    }
    */
//}

/*
double player_stand(int ptot, int pace, int cards, int deck[])
{
    double ev_stand, dealer_probability[7];
    if ((ptot == 11) && (pace == 1) && (cards == 2))
    {
        if ((upcard > 1) && (upcard < 10)) //This means you have won Blackjack and defeated me, human!
            return 1.5;
        else
        {
            dealer(upcard, (upcard == 1 ? 1 : 0), 1, 1.0, deck, dealer_probability);
            return 1.5 * (dealer_probability[0] + dealer_probability[1] + dealer_probability[2] + dealer_probability[3] + dealer_probability[4] + dealer_probability[6]);
        }
    }
    else if (ptot > 21) //You are busted and have lost to me, human!
        return -1.0;
    else
    {
        if ((ptot <= 11) && (pace > 0)) //You have a soft hand.
            ptot += 10;
        dealer(upcard, (upcard == 1 ? 1 : 0), 1, 1.0, deck, dealer_probability);
        ev_stand = dealer_probability[6];
        ev_stand -= dealer_probability[5];
        for (int i = 0; i <= 4; i++)
        {
            if (ptot > i + 17)
                ev_stand += dealer_probability[i];
            else if (ptot < i + 17)
                ev_stand -= dealer_probability[i];
        }
    }
    return ev_stand;
}

double player_hit(int ptot, int pace, int cards, int deck[])
{
    int next_card;
    double probability, ev_stand, ev_hit, ev_hit_again;
    ev_hit = 0.0;
    for (next_card = 1; next_card <= 10; next_card++)
    {
        probability = (double)deck[next_card] / (double)deck[0];
        deck[next_card]--;
        deck[0]--;
        ev_stand = player_stand(ptot + next_card, pace + (next_card == 1 ? 1 : 0), cards + 1, deck);
        if (ptot + next_card < 17)
            ev_hit_again = player_hit(ptot + next_card, pace + (next_card == 1 ? 1 : 0), cards + 1, deck);
        else
            ev_hit_again = -1;
        ev_hit += probability * max2(ev_stand, ev_hit_again);
        deck[next_card]++;
        deck[0]++;
    }
    return ev_hit;
}

double player_double(int ptot, int pace, int deck[])
{
    int next_card;
    double probability, ev_double;
    ev_double = 0.0;
    if (ptot > 11)
        ev_double = -1;
    else
    {
        for (next_card = 1; next_card <= 10; next_card++)
        {
            probability = (double)deck[next_card] / (double)deck[0];
            deck[next_card]--;
            deck[0]--;
            ev_double += probability * player_stand(ptot + next_card, pace + (next_card == 1 ? 1 : 0), 3, deck);
            deck[next_card]++;
            deck[0]++;
        }
    }
    return 2 * ev_double;
}

double player_split(int ptot, int pace, int deck[])
{
    int next_card;
    double probability, ev_split, ev_stand, ev_hit;
    ev_split = 0.0;
    for (next_card = 1; next_card <= 10; next_card++)
    {
        probability = (double)deck[next_card] / (double)deck[0];
        deck[next_card]--;
        deck[0]--;
        ev_stand = player_stand(ptot + next_card, pace + (next_card == 1 ? 1 : 0), 3, deck);
        if (ptot == 1)
            ev_hit = -1.0;
        else
            ev_hit = player_hit(ptot + next_card, pace + (next_card == 1 ? 1 : 0), 2, deck);
        ev_split += probability * max2(ev_stand, ev_hit);
        deck[next_card]++;
        deck[0]++;
    }
    return 2 * ev_split;
}

double max2(double x, double y)
{
    if (x > y)
        return x;
    else
        return y;
}

int prob()
{
    return 0;
}


Dealer Probability
0=17
1=18
2=19
3=20
4=21
5=bj
6=bust

void dealer(int old_total, int old_ace, int cards, double probability, int deck[], double dealer_probability[])
{
    int i, next_card, new_total, new_ace;
    if (cards == 1)
    {
        for (i = 0; i <= 6; i++)
            dealer_probability[i] = 0.0;
    }
    for (next_card = 1; next_card <= 10; next_card++)
    {
        probability *= (double)deck[next_card] / (double)deck[0];
        deck[next_card]--;
        deck[0]--;
        new_total = old_total + next_card;
        new_ace = old_ace + (next_card == 1 ? 1 : 0);
        if ((cards == 1) && (new_total == 11) && (new_ace == 1)) {//Well done, human. You now have blackjack!
            dealer_probability[5] += probability;
            std::cerr << "Curses! You have blackjack!\n";
            std::cerr << "I may have lost to you this time, but we shall meet again!\n";
        }
        else if (new_total > 21) { //What a pity for you, human. The number has gone over 21!
            dealer_probability[6] += probability;
            std::cerr << "It appears that I am triumphant!\n";
            std::cerr << "You are now one of my playthings for all of eternity!\n";
        }
        else if (new_total >= 17) {
            dealer_probability[new_total - 17] += probability;
        }
        else if ((new_total >= 17) && (new_total <= 11) && (new_ace > 0)) {
            dealer_probability[new_total - 7] += probability;
        }
        else {
            dealer(new_total, new_ace, cards + 1, probability, deck, dealer_probability);
        }
        deck[0]++;
        deck[next_card]++;
        probability /= (double)deck[next_card] / (double)deck[0];
    }
}
*/