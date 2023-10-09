#include <iostream>
#include <cmath>
using namespace std;

float sohang(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	cout << "So hang thu " << n << " cua day la: " << sohang(n);

	return 0;
}

float sohang(int nn)
{
	float ahh;
	float at = 2;
	int i = 2;
	while (i <= nn)
	{
		ahh = 5 * at + sqrt(24 * at * at - 8);
		i++;
		at = ahh;
	}

	return ahh;
}