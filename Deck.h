#pragma once
#include <vector>

//#include "Card.h"

class FCard; //���漱��, ��� �ִ� FCard class

class FDeck
{
public:
	FDeck();
	virtual ~FDeck();

	//FCard Cards[52];
	std::vector<FCard*> Cards; //����� ������ ������� *pointerȭ 8byte = 64bit

	void Check();
};

