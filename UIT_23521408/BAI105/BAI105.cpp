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
	int m = 0;
	float e = 1;
	int i = 1;
	while (e > pow(10, -6))
	{
		m = m + i;
		e = (float)1 / m;
		S = S + e;
		i = i + 1;
	}

	return S;
}