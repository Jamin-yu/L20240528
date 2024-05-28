#pragma once
#include <vector>

//#include "Card.h"

class FCard; //전방선언, 어딘가 있는 FCard class

class FDeck
{
public:
	FDeck();
	virtual ~FDeck();

	//FCard Cards[52];
	std::vector<FCard*> Cards; //지우고 싶을때 지우려고 *pointer화 8byte = 64bit

	void Check();
};

