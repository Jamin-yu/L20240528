#include <iostream>
#include <vector>

#include "Person.h"
#include "Player.h"
#include "Dealer.h"
#include "Deck.h"
#include "Card.h"


using namespace std;

int main()
{
	FDeck Deck;
	FPlayer Player;
	FDealer Dealer;

	Player.Draw(Deck.Draw());
	Player.Draw(Deck.Draw());
	Dealer.Draw(Deck.Draw());
	Dealer.Draw(Deck.Draw());

	cout << Player.Check() << endl;
	cout << Dealer.Check() << endl;

	Player.Show();
	Dealer.Show();

	return 0;
}

