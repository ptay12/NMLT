#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;

float TinhSin(float);

int main()
{
	float x;
	cout << "Nhap x: ";
	cin >> x;
	cout << "sin cua " << x << " la: " << TinhSin(x);

	return 0;
}

float TinhSin(float x1)
{
	float xx = (x1 * M_PI) / 180;
	float S = xx;
	float t = xx;
	float m = 1;
	int dau = -1;
	float e = xx;
	int i = 3;
	while (e > pow(10, -6))
	{
		t = t * xx * xx;
		m = m * i * (i - 1);
		e = t / m;
		S = S + dau*e;
		dau = -dau;
		i = i + 2;
	}

	return S;
}