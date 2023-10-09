#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

void GiaiBacHai(float, float, float);

int main()
{
	float a;
	cout << "Nhap a: ";
	cin >> a;
	float b;
	cout << "Nhap b: ";
	cin >> b;
	float c;
	cout << "Nhap c: ";
	cin >> c;

	GiaiBacHai(a, b, c);

	return 0;
}

void GiaiBacHai(float aa, float bb, float cc)
{
	float delta = bb * bb - 4 * aa * cc;
	if (delta <= 0)
	{
		if (delta == 0)
		{
			float xx = (-bb) / (2 * aa);
			cout << "Nghiem cua phuong trinh la: " << xx;
		}
		else cout << "Vo nghiem";
	}
	else 
	{
		float x1 = (-bb + sqrt(delta)) / (2 * aa);
		float x2 = (-bb - sqrt(delta)) / (2 * aa);
		cout << "Nghiem cua phuong trinh la: " << x1 << setw(4) << x2;
	}
}
