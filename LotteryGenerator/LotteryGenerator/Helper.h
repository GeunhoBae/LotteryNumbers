#pragma once
#include <iostream>
using namespace std;

enum LotteryKind;

void Swap(int& a, int& b);
void Sort(int* numbers, int count);

void Menu(); //���� ���� ����
void ChooseLotto(int* numbers); //�ζ� ��ȣ����
void ChooseMonthlyLotto(int* numbers); //���� ���� ����
void PrintLotto(int* numbers);