#include<iostream>
#include <cmath>

using namespace std;

float TinhEuler();

int main()
{
	cout << "euler bang " << TinhEuler();
	return 0;
}

float TinhEuler()
{
	float S = 1;
	float m = 1;
	float e = 1;
	int i = 1;
	while (e > pow(10, -6))
	{
		m = m * i;
		e = (float)1 / m;
		S = S + e;
		i++;
	}
	return S;
}
