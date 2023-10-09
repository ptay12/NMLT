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
	float ahh;
	float att = 1;
	float at = 2;
	int i = 2;
	while (i <= nn)
	{
		ahh = 4 * at + att;
		i++;
		att = at;
		at = ahh;
	}

	return ahh;
}