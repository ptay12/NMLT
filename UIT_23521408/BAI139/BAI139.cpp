#include <iostream>

using namespace std;
void GiaiBacNhat(float, float);

int main()
{
	float a;
	cout << "Nhap a: ";
	cin >> a;
	float b;
	cout << "Nhap b: ";
	cin >> b;

	GiaiBacNhat(a, b);

	return 0;
}

void GiaiBacNhat(float aa, float bb)
{
	if (aa == 0)
	{
		if (bb == 0) cout << "Vo so nghiem";
		else cout << "Vo nghiem";
	}
	else
	{
		float xx = (-bb) / aa;
		cout << "Nghiem cua phuong trinh la: " << xx;
	}
}