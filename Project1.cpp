﻿#include <iostream>

int EnterNumber(int num) {

	return 0;
}

void CalcArea(int num) {

}

void CalcPerim(int num, int n) {
	int P = n * 3;
	std::cout << n << std::endl;
}

int main()
{
    int x;
    std::cout<<"1. Enter a positive number A \n2. Calculate the area of a triangle \n3. Calculate the perimeter of a triangle "<< std::endl;
    std::cin >> x;

	switch (x)
	{
	case 1:
		EnterNumber(x);
		break;
	case 2:
		CalcArea(x);
		break;
	case 3:
		CalcPerim(x);
		break;
	default:
		break;
	}
}
