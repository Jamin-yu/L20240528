#include "Card.h"
#include <iostream>

using namespace;

FCard::FCard()
{
	//�ʱ�ȭ
	Shape = "";
	Number = 0;
}

FCard::~FCard()
{
}

void FCard::Show()
{
	cout << Shape << " " << Number << endl;
}
