#include "Player.h"
#include <iostream>

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
