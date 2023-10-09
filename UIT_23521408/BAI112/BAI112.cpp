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
	float S = 4 - (float)2 / 4 - (float)1 / 5 - (float)1 / 6;
	float t = 1;
	float e = 1;
	int i = 1;
	while (e > pow(10, -6))
	{
		t = t * 16;
		e = ((float)4 / (8 * i + 1) - (float)2 / (8 * i + 4) - (float)1 / (8 * i + 5) - (float)1 / (8 * i + 6)) / t;
		S = S + e;
		i = i + 1;
	}

	return S;
}
