#include <iostream>

using namespace std;

void GTTD(float&, float&);
int main()
{
	float a, b;
	cout << "Nhap 2 so a,b: ";
	cin >> a >> b;
	GTTD(a, b);
	cout << "gia tri tuyet doi cua a,b la: " << a << "," << b;

	return 0;
}
void GTTD(float& aa, float& bb)
{
	if (aa < 0) aa = -aa;
	if (bb < 0) bb = -bb;
}