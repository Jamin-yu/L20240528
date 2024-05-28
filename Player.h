#pragma once
#include <vector>
#include "Person.h"

using namespace std;

class FCard;

class FPlayer : public FPerson
{
public:
	FPlayer();
	virtual ~FPlayer();

	vector<FCard*> Cards;
	
	void Draw(FCard* NewCard);
	int Check();
	void Show();
};

