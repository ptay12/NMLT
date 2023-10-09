#include <iostream>
#include <cmath>

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
	if (xx >= 0)
	{
		if (xx <= 1) return (5 * xx - 7);
		else return (2 * pow(xx, 3) + 5 * pow(xx, 2) - 8 * xx + 3);
	}
	else return (-2 * pow(xx, 3) + 6 * xx + 9);
}