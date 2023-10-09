#include <iostream>
#include <cmath>
using namespace std;
float Tong(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	cout << "Ket qua: " << Tong(n);

	return 0;
}

float Tong(int nn)
{
	float S = 0;
	int i = 1;
	while (i <= nn)
	{
		S = sqrt(i + S);
		i++;
	}

	return S;
}