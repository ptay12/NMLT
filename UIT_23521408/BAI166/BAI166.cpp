#include <iostream>
using namespace std;
int TimkMin(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	cout << "So nguyen k nho nhat thoa man la: " << TimkMin(n);

	return 0;
}

int TimkMin(int nn)
{
	int t = 1;
	int k = 1;
	while (2 * t <= nn)
	{
		t = t * 2;
		k = k + 1;
	}
	return k;
}