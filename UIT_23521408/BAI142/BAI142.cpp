#include <iostream>
using namespace std;
int DaoNguoc(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	cout << "Chu so dao nguoc cua " << n << " la : " << DaoNguoc(n);

	return 0;
}

int DaoNguoc(int nn)
{
	int dv;
	int dn = 0;
	int t = nn;
	while (t != 0)
	{
		dv = t % 10;
		dn = dn * 10 + dv;
		t = t / 10;
	}
	return dn;
}