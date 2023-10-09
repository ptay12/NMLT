#include <iostream>

using namespace std;
bool KiemTra(float, float, float);

int main()
{
	float x, y, z;
	cout << "Nhap x,y,z: ";
	cin >> x >> y >> z;

	if (KiemTra(x,y,z)) cout << "BDT dung";
	else cout <<"BDT sai";

	return 0;
}

bool KiemTra(float xx, float yy, float zz)
{
	return (xx <= yy and yy <= zz);
}