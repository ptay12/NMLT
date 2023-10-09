#include <iostream>

using namespace std;
float Tong(float, int);

int main()
{
	float x;
	cout << "Nhap x: ";
	cin >> x;
	int n;
	cout << "Nhap n: ";
	cin >> n;

	cout << "Ket qua: " << Tong(x, n);

	return 0;
}

float Tong(float xx, int nn)
{
	float S = -1;
	float t = 1;
	float m = 1;
	int i = 2;
	int dau = +1;
	while (i <= 2 * nn)
	{
		t = t * xx * xx;
		m = m * i * (i - 1);
		S = S + (float)dau * t / m;
		i = i + 2;
		dau = -dau;
	}
	return S;
}