#include <iostream>
using namespace std;

void sohang(int, float&, float&);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	float ahh, bhh;
	sohang(n, ahh, bhh);
	cout << "So hang thu " << n << " cua day la: " << ahh << "," << bhh;

	return 0;
}

void sohang(int nn, float& aahh, float& bbhh)
{
	float at = 1;
	float bt = 1;
	int i = 2;
	while (i <= nn)
	{
		aahh = 3 * bt + 2 * at;
		bbhh = at + 3 * bt;
		i++;
		at = aahh;
		bt = bbhh;
	}
}