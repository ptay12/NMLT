#include <iostream>
#include <cmath>

using namespace std;

void Nhap(float&, float&);
float XuLy(float, float, float, float);
void KiemTraTamGiac(float, float, float);
int main()
{
	float xA, yA;
	cout << "Diem A: " << endl;;
	Nhap(xA, yA);

	float xB, yB;
	cout << "Diem B: " << endl;
	Nhap(xB, yB);

	float xC, yC;
	cout << "Diem C: " << endl;
	Nhap(xC, yC);

	float a = XuLy(xA, yA, xB, yB);
	float b = XuLy(xA, yA, xC, yC);
	float c = XuLy(xB, yB, xC, yC);

	KiemTraTamGiac(a, b, c);

	return 0;
}
void Nhap(float& xx, float& yy)
{
	cout << "Nhap hoanh do: ";
	cin >> xx;
	cout << "Nhap tung do: ";
	cin >> yy;
}
float XuLy(float x1, float y1, float x2, float y2)
{
	return sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
}
void KiemTraTamGiac(float aa, float bb, float cc)
{
	if (aa + bb > cc && aa + cc > bb && bb + cc > aa) cout << "La tam giac";
	else cout << "Ko la tam giac";
}