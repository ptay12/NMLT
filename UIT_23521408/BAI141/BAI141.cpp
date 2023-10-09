#include <iostream>
using namespace std;
int ChuSoDau(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	cout << "Chu so dau cua " << n << " la : " << ChuSoDau(n);

	return 0;
}

int ChuSoDau(int nn)
{
	int dt = abs(nn);
	while (dt >= 10) dt = dt / 10;
	return dt;
}