#include <iostream>

using namespace std;

float Hamf(float);

int main()
{
	float x;
	cout << "Nhap x: ";
	cin >> x;
	cout << "Gia tri cua ham so la: " << Hamf(x);
	return 0;
}

float Hamf(float xx)
{
	if (xx >= 5) return (2 * xx * xx + 5 * xx + 9);
	else return (-2 * xx * xx + 4 * xx - 9);
}