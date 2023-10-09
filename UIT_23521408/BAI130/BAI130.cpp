#include <iostream>

using namespace std;

void KiemTraTamGiac(float, float, float);

int main()
{
	float x, y, z;
	cout << "Nhap 3 canh tam giac:";
	cin >> x >> y >> z;
	KiemTraTamGiac(x, y, z);

	return 0;
}

void KiemTraTamGiac(float xx, float yy, float zz)
{
	if (xx + yy > zz && xx + zz > yy && yy + zz > xx) cout << "La tam giac";
	else cout << "Ko la tam giac";
}