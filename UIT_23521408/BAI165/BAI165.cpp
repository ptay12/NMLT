#include <iostream>
using namespace std;
int TimkMax(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	cout << "So nguyen k lon nhat thoa man la: " << TimkMax(n);

	return 0;
}

int TimkMax(int nn)
{
	int t = 1;
	int k = 0;
	while (2 * t <= nn)
	{
		t = t * 2;
		k = k + 1;
	}
	return k;
}