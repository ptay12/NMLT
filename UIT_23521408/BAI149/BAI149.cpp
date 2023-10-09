#include <iostream>
#include <cmath>
using namespace std;
int UCLN(int, int);

int main()
{
	int a;
	cout << "Nhap a: ";
	cin >> a; 
	int b;
	cout << "Nhap b: ";
	cin >> b;

	cout << "Uoc chung lon nhat cua " << a << ", " << b << " la: " << UCLN(a, b);

	return 0;
}

int UCLN(int aa, int bb)
{
	int m = abs(aa);
	int n = abs(bb);

	while (m * n != 0)
	{
		if (m > n) m = m - n;
		else n = n - m;
	}
	return (m + n);
}