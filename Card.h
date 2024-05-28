#pragma once
#include <string>
#include "Deck.h"

class FCard : public FDeck
{
public:
	FCard(); //持失切
	virtual ~FCard(); //社瑚切

	void SetShape(std::string NewShape)
	{
		Shape = NewShape;
	}
	void SetNumber(int NewNumber)
	{
		if (NewNumber >= 1 && NewNumber <= 13)
		{
			Number = NewNumber;
		}
	}

protected:
	//朝球
	std::string Shape;
	int Number;

public:
	void Show();
}