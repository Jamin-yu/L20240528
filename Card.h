#pragma once
#include <string>
#include "Deck.h"

enum class ECardType //������ enum
{
	None = -1,
	Clova = 0,	//0
	Spade,	//1
	Heart,	//2
	Diamond	//3
	Max
};

class FCard : public FDeck
{
public:
	FCard(); //������
	virtual ~FCard(); //�Ҹ���

	void SetType(ECardType NewCardType);

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
	EType Type;
	int Number;

	void ShowNumber();

public:
	void Show();
}