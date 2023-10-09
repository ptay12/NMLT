#include<iostream>
#include <cmath>

using namespace std;

float TinhPi();

int main()
{
	cout << "Pi bang " << TinhPi();

	return 0;
}

float TinhPi()
{
	float S = 3;
	int dau = +1;
	float e = 3;
	int i = 2;
	while (e > pow(10, -6))
	{
		e = (float)4 / (i * (i + 1) * (i + 2));
		S = S + dau * e;
		i = i + 2;
		dau = -dau;
	}

	return S;
}
