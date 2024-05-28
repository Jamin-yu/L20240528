#pragma once
#include <vector>
#include "Person.h"

using namespace std;

class FCard;

class FDealer : public FPerson
{
public:
	FDealer();
	virtual ~FDealer();

	vector<FCard*> Cards;

	void Draw(FCard* NewCard);
	int Check();
	void Show();
};

