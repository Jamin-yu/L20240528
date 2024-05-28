#pragma once
#include <string>
#include "Deck.h"

class FCard : public FDeck
{
public:
	FCard(); //������
	virtual ~FCard(); //�Ҹ���

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
	//ī��
	std::string Shape;
	int Number;

public:
	void Show();
}