#include <iostream>

using namespace std;

void TangDan(float&, float&);
int main()
{
	float a, b;
	cout << "Nhap 2 so a, b: ";
	cin >> a >> b;
	TangDan(a, b);
	cout << "Thu tu tang dan la: " << a << ", " << b;
	return 0;
}
void TangDan(float& aa, float& bb)
{
	float temp;
	if (aa > bb)
	{
		temp = aa;
		aa = bb;
		bb = temp;
	}
}
