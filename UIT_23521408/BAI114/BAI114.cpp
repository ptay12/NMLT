#include <iostream>
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
	float ahh, at = -2;
	float tt = 3;
	float pp = 7;
	int i = 2;
	while (i <= nn)
	{
		tt = tt * 3;
		pp = pp * 7;
		ahh = 5 * at + 2 * tt - 6*pp + 12;
		i++;
		at = ahh;
	}

	return ahh;
}