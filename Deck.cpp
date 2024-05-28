#include "Deck.h"
#include <iostream>

FDeck::FDeck()
{
	Cards[52]; = { 0, };
}

FDeck::~FDeck()
{
}

void FDeck::Shuffle()
{
	for (int i = 0; i < 52; ++i)
	{
		Cards[i] = i;
	}
	
	for (int i = 0; i < 100; ++i)
	{
		FirstCard = rand() % 52;
		SecondCard = rand() % 52;
		
		int Temp = Cards[FirstCard];
		Cards[FirstCard] = Card[SecondCard];
		Card[SecondCard] = Temp;
	}
}

void FDeck::Pick()
{

}
