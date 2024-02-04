#pragma once
#include <iostream>
using namespace std;

enum LotteryKind;

void Swap(int& a, int& b);
void Sort(int* numbers, int count);

void Menu(); //복권 종류 선택
void ChooseLotto(int* numbers); //로또 번호생성
void ChooseMonthlyLotto(int* numbers); //연금 복권 생성
void PrintLotto(int* numbers);