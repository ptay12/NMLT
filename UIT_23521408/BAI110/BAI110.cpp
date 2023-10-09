#include<iostream>
#include <cmath>

using namespace std;

float TinhPi(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	cout << "Pi bang " << TinhPi(n);

	return 0;
}

float TinhPi(int nn)
{
	float S = 0;
	int dau = 1;
	float e = 4;
	int i = 1;
	while (e > pow(10, -6))
	{
		e = (float)4 / i;
		S = S + dau * e;
		i = i + 2;
		dau = -dau;
	}

	return S;
}
