#include <iostream>
#include <cmath>

using namespace std;

void Nhap(float&, float&);
float DienTich(float, float, float, float, float, float);
bool KiemTra(float, float);
int main() 
{
	float xA, yA;
	cout << "Nhap diem A: " << endl;
	Nhap(xA, yA);

	float xB, yB;
	cout << "Nhap diem B: " << endl;
	Nhap(xB, yB);

	float xC, yC;
	cout << "Nhap diem C: " << endl;
	Nhap(xC, yC);

	float xM, yM;
	cout << "Nhap diem M: " << endl;
	Nhap(xM, yM);
	
	float SABC = DienTich(xA, yA, xB, yB, xC, yC);
	float SMAB = DienTich(xA, yA, xB, yB, xM, yM);
	float SMBC = DienTich(xM, yM, xB, yB, xC, yC);
	float SMAC = DienTich(xA, yA, xM, yM, xC, yC);
	float S = SMAB + SMBC + SMAC;

	if (KiemTra(S, SABC)) cout << "M trong";
	else cout << "M ngoai";

	return 0;
}
void Nhap(float& xx, float& yy)
{
	cout << "Nhap hoanh do: ";
	cin >> xx;
	cout << "Nhap tung do: ";
	cin >> yy;
}
float DienTich(float x1, float y1, float x2, float y2, float x3, float y3)
{
	return abs(x1 * y2 + x2 * y3 + x3 * y1 - x2 * y1 - x3 * y2 - x1 * y3)/2;
}
bool KiemTra(float S1, float S2)
{
	return S1 == S2;
}
