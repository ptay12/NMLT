#include <iostream>
#include <cmath>
using namespace std;
int BCNN(int, int);

int main()
{
	int a;
	cout << "Nhap a: ";
	cin >> a;
	int b;
	cout << "Nhap b: ";
	cin >> b;

	cout << "boi chung nho nhat cua " << a << ", " << b << " la: " << BCNN(a, b);

	return 0;
}

int BCNN(int aa, int bb)
{
	int m = abs(aa);
	int n = abs(bb);

	while (m * n != 0)
	{
		if (m > n) m = m - n;
		else n = n - m;
	}
	return (abs(aa * bb) / (m + n));
}