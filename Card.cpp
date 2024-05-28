#include "Card.h"
#include <iostream>

using namespace std;

FCard::FCard()
{
	//�ʱ�ȭ
	Type = ECardType::None;
	//Type = ((ECardType)1);
	Shape = "";
	Number = 0;
}

FCard::~FCard()
{
}

void FCard::SetShape(std::string NewShape)
{
}

void FCard::SetNumber(int NewNumber)
{
	if (NewNumber >= 1 && NewNumber <= 13)
	{
		Number = NewNumber;
	}
}

void FCard::ShowNumber()
{
	switch (Number)
	{
	case 1:
		cout << "Ace";
		break;
	case 11:
		cout << "J";
		break;
	case 12:
		cout << "Q";
		break;
	case 13:
		cout << "K";
		break;
		default
			cout << Number;
		break;
	}
}

void FCard::Show()
{
	//2d �׸� �׸���
	string CardType[4] = {
		"Clova", "Spade", "Heart", "Diamond"
	};

	cout << static_cast<int>(Type) << " ";

	ShowNumber();

	cout << endl;
}
