#include <iostream>
#include <cmath>
using namespace std;

float Tong();

int main()
{
	cout << "Tong la: " << Tong();

	return 0;
}

float Tong()
{
	float S = 0;
	float e = 0.5;
	int i = 2;
	while (e > pow(10, -6))
	{
		e = (float)1 / i;
		S = S + e;
		i = i + 2;
	}

	return S;
}