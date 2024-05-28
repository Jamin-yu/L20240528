#include "Player.h"
#include "Card.h"

FPlayer::FPlayer()
{
}

FPlayer::~FPlayer()
{
}

void FPlayer::Draw(FCard* NewCard)
{
	Cards.push_back(NewCard);
}

void FPlayer::Check();
{
	int Total = 0;
	for (auto Card : Cards)
	{
		Total += Card->GetScore();
	}
	return Total;
}

void FPlayer::Show()
{
	for (auto Card : Cards)
	{
		Card->Show();
	}

}

