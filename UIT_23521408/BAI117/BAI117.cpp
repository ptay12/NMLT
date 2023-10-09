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
	float att = -1;
	float at = 3;
	int i = 2;
	float t = 2;
	while (i <= nn)
	{
		t = t * 2;
		ahh = 5 * t + 5 * at - att;
		i++;
		att = at;
		at = ahh;
	}

	return ahh;
}