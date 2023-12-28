#include <iostream>
#include <cmath>

int n;

int EnterNumber() {
	std::cout << "Enter lenght: " << std::endl;
	std::cin >> n;
	return n;
}

void CalcArea() {
	float S = pow(n, 2) * sqrt(3) / 4;
	std::cout << " Area: " << S << std::endl;
}

void CalcPerim() {
	int P = n * 3;
	std::cout << " Perimeter: " << P << std::endl;
}

int main()
{
	int x;
	EnterNumber();

	std::cout << "Choose an action:\n 1. Calculate the area of a triangle \n 2. Calculate the perimeter of a triangle " << std::endl;
	std::cin >> x;
	switch (x)
	{
	case 1:
		CalcArea();
		break;
	case 2:
		CalcPerim();
		break;
	default:
		std::cout << "Error" << std::endl;
		break;
	}
}
