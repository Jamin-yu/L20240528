#pragma once

class FDeck
{
public:
	FDeck();
	virtual ~FDeck();

	int FirstCard;
	int SecondCard;

	void Shuffle();
	void Pick();

protected:
	int Cards;
	
};

