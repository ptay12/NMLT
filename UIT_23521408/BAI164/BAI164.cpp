#include <iostream>
using namespace std;
float Tong(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	cout << "Tong la: " << Tong(n);

	return 0;
}

float Tong(int nn)
{
	float S = 1;
	int i = 1;
	while (i <= nn)
	{
		S = (float)1 / (1 + S);
		i++;
	}
	return S;
}