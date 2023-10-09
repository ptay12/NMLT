#include<iostream>
#include <cmath>

using namespace std;

float emux(float);

int main()
{
	float x;
	cout << "Nhap x: ";
	cin >> x;

	cout << "e mu " << x << " bang " << emux(x);
	return 0;
}

float emux(float xx)
{
	float S = 1;
	float t = 1;
	float m = 1;
	float e = 1;
	int i = 1;
	while (e > pow(10, -6))
	{
		t = t * xx;
		m = m * i;
		e = t / m;
		S = S + e;
		i++;
	}
	return S;
}
