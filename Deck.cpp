#include "Deck.h"
#include "Card.h"

FDeck::FDeck()
{
	//카드생성 52장 (4타입 x 13장)
	for (int Type = 0; Type < 4; ++Type)
	{
		for (int Number = 1; Number <= 13; ++Number)
		{
			FCard* Temp = new FCard();
			switch (Type)
			{
				case 0;
					Temp->SetShape("Diamond");
					break;

				case 1;
					Temp->SetShape("Spade");
					break;

				case 2;
					Temp->SetShape("Clova");
					break;

				case 3;
					Temp->SetShape("Heart");
					break;

				default:
					break;
			}
			Temp->SetNumber(Number);

			Cards.push_back(Temp);
		}
	}

}

FDeck::~FDeck()
{
}

void FDeck::Check()
{
	/*for (int i = 0; i < Cards.size(); ++i)
	{
		Cards[i]->Show();
	}//전통적 for문 */
	//성능은 얘가 더 빨라

	for (auto Card : Cards) //auto 알아서 FCard*로 변경됨
	{
		Card->Show();
	}//자료구조 사용, vector
	//내가 가진 배열 덩어리에서 하나씩 꺼내줘
	//조금 느리지만 가독성이 좋아


}


