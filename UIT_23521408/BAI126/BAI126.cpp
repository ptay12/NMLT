#include <iostream>

using namespace std;

float Max(float&, float&);
int main()
{
	float a, b;
	cout << "Nhap 2 so a,b: ";
	cin >> a >> b;
	cout << "Gia tri lon nhat la: " << Max(a, b);

	return 0;
}
float Max(float& aa, float& bb)
{
	float lc = aa;
	if (lc < bb) lc = bb;

	return lc;
}