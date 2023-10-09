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
	float S = 0;
	int k = 0;
	while (S + k + 1 <= nn)
	{
		k = k + 1;
		S = S + k;
	}
	return k;
}