#include <iostream>

using namespace std;
void Nhap(float&, int&);
float Tong(float, int);

int main()
{
	float x;
	int n;

	Nhap(x, n);

	cout << "Ket qua: " << Tong(x, n);

	return 0;
}

void Nhap(float& xx, int& nn)
{
	cout << "Nhap x: ";
	cin >> xx;
	cout << "Nhap n: ";
	cin >> nn;
}

float Tong(float xx, int nn)
{
	float S = 0;
	float t = 1;
	float m = 1;
	int i = 1;
	int dau = -1;
	while (i <= nn)
	{
		t = t * xx;
		m = m * i;
		S = S + (float)dau * t / m;
		i++;
		dau = -dau;
	}
	return S;
}