#include "Dealer.h"
#include "Card.h"

FDealer::FDealer()
{
}

FDealer::~FDealer()
{
}

void FDealer::Draw(FCard* NewCard)
{
	Cards.push_back(NewCard);
}

int FDealer::Check()
{
	int Total = 0;
	for (auto Card : Cards)
	{
		Total += Card->GetScore();
	}
	return Total;
}

void FDealer::Show()
{
	for (auto Card : Cards)
	{
		Card->Show();
	}
}
