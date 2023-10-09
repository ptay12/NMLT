#include <iostream>

using namespace std;

void TangDan(float&, float&, float&);
int main()
{
	float a, b, c;
	cout << "Nhap 3 so a, b, c: ";
	cin >> a >> b >> c;
	TangDan(a, b, c);
	cout << "Thu tu tang dan la: " << a << ", " << b << ", " << c;
	return 0;
}
void TangDan(float& aa, float& bb, float& cc)
{
	float temp;
	if (aa > bb)
	{
		temp = aa;
		aa = bb;
		bb = temp;
	}
	if (aa > cc)
	{
		temp = aa;
		aa = cc;
		cc = temp;
	}
	if (bb > cc)
	{
		temp = bb;
		bb = cc;
		cc = temp;
	}
}
