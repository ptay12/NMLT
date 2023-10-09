#include <iostream>
using namespace std;
int SoChuSo(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	cout << "so chu so dau tien cua " << n << " la: " << SoChuSo(n);

	return 0;
}

int SoChuSo(int nn)
{
	int dv;
	int dt = nn;
	while (dt >= 10) dt = dt / 10;
	int dem = 0;
	int t = nn;
	while (t != 0)
	{
		dv = t % 10;
		if (dv == dt) dem++;
		t = t / 10;
	}
	return dem;
}