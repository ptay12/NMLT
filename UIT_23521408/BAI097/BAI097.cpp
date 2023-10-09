#include <iostream>
#include <cmath>
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
	float S = 0;
	float t = 1;
	int i = 1;
	while (i <= nn)
	{
		t = t * xx;
		S = sqrt(t + S);
		i++;
	}

	return S;
}