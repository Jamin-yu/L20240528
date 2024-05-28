#include "Deck.h"
#include "Card.h"
#include <algorithm>

FDeck::FDeck()
{
	//ī����� 52�� (4Ÿ�� x 13��)
	for (int Type = 0; Type < 4; ++Type)
	{
		for (int Number = 1; Number <= 13; ++Number)
		{
			//FCard* Temp = new FCard();
			//switch (Type)
			//{
			//	case 0;
			//		Temp->SetShape(ECardType::Clova);
			//		break;

			//	case 1;
			//		Temp->SetShape(ECardType::Spade);
			//		break;

			//	case 2;
			//		Temp->SetShape(ECardType::Heart);
			//		break;

			//	case 3;
			//		Temp->SetShape(ECardType::Diamond);
			//		break;

			//	default:
			//		break;
			//}
			static_cast<int>(3.4f) == (int)3.4f; //true

			Temp->SetType(static_cast<ECardType>(Type));
			Temp->SetNumber(Number);

			Cards.push_back(Temp);
		}
	}
	CurrentPosition = Cards.size() - 1;

	std::random_shuffle(Cards.begin(), Cards.end());
}

FDeck::~FDeck()
{
}

void FDeck::Check()
{
	/*for (int i = 0; i < Cards.size(); ++i)
	{
		Cards[i]->Show();
	}//������ for�� */
	//������ �갡 �� ����

	for (auto Card : Cards) //auto �˾Ƽ� FCard*�� �����
	{
		Card->Show();
	}//�ڷᱸ�� ���, vector
	//���� ���� �迭 ������� �ϳ��� ������
	//���� �������� �������� ����
}

FCard* FDeck::Draw()
{
	FCard* Temp = Cards[CurrentPosition];
	CurrentPosition--;

	return Temp;
}


