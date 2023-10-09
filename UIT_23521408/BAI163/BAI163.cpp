#include <iostream>
using namespace std;
int UocLeMax(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	cout << "Uoc le lon nhat cua " << n << " la " << UocLeMax(n);

	return 0;
}

int UocLeMax(int nn)
{
	int t = nn;
	while (t % 2 == 0) t = t / 2;
	return t;
}