#pragma once
#include <string>
#include "Deck.h"

enum class ECardType //열거형 enum
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
	FCard(); //생성자
	virtual ~FCard(); //소멸자

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
	//카드
	std::string Shape;
	EType Type;
	int Number;

	void ShowNumber();

public:
	void Show();
}