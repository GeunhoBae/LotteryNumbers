#include "Helper.h"

void Swap(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}

void Sort(int* numbers, int count)
{
	for (int i = 0; i < count; i++)
	{
		for (int j = 0; j < count - 1; j++)
		{
			if (numbers[j] > numbers[j + 1])
				Swap(numbers[j], numbers[j + 1]);
		}
	}
}

enum LotteryKind
{
	None,
	Lotto,
	MonthLotto,
};

//메뉴 선택
void Menu()
{
	int menu;

	cout << "1.로또 2.연금복권"<<endl;
	cout << ">";
	cin >> menu;

	int lotto[6]; // 로또 숫자 담는 배열

	if (menu == Lotto)
		ChooseLotto(lotto);
	else if (menu == MonthLotto)
		ChooseMonthlyLotto(lotto);
}

//로또 번호 생성기
void ChooseLotto(int* numbers)
{
	int count = 0;

	while (count != 6)
	{
		//1~45
		int randValue = 1 + rand() % 45;

		//이미 찾은 값인지?
		bool found = false;

		for (int i = 0; i < count; i++)
		{
			if (numbers[i] == randValue)
			{
				found = true;
				break;
			}
		}
		if (found == false)
		{
			numbers[count] = randValue;
			count++;
		}
	}

	PrintLotto(numbers);
}

//연금 복권 생성기
void ChooseMonthlyLotto(int* numbers)
{
	int count = 0;

	while (count != 6)
	{
		//0~9
		int randValue = rand() % 10;

		numbers[count] = randValue;
		count++;
	}
	
	PrintLotto(numbers);
}

//출력
void PrintLotto(int* numbers)
{
	int count = 0;

	while (count != 6)
	{
		cout << numbers[count++] << " ";
	}
}
