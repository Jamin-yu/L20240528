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
	srand(time(0));
	FDeck Deck;
	FCard Cards;

	FPerson people;
	FPlayer Player;
	FDealer Dealer;

	Player.Get();
	Player.Open();
	Dealer.Get();
	Dealer.Open();


	void Compare();
	return 0;
}