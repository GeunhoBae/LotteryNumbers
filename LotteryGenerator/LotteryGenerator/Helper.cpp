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

//�޴� ����
void Menu()
{
	int menu;

	cout << "1.�ζ� 2.���ݺ���"<<endl;
	cout << ">";
	cin >> menu;

	int lotto[6]; // �ζ� ���� ��� �迭

	if (menu == Lotto)
		ChooseLotto(lotto);
	else if (menu == MonthLotto)
		ChooseMonthlyLotto(lotto);
}

//�ζ� ��ȣ ������
void ChooseLotto(int* numbers)
{
	int count = 0;

	while (count != 6)
	{
		//1~45
		int randValue = 1 + rand() % 45;

		//�̹� ã�� ������?
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

//���� ���� ������
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

//���
void PrintLotto(int* numbers)
{
	int count = 0;

	while (count != 6)
	{
		cout << numbers[count++] << " ";
	}
}
