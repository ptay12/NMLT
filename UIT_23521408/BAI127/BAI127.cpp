#include <iostream>

using namespace std;

float Min(float&, float&);
int main()
{
	float a, b;
	cout << "Nhap 2 so a,b: ";
	cin >> a >> b;
	cout << "Gia tri nho nhat la: " << Min(a, b);

	return 0;
}
float Min(float& aa, float& bb)
{
	float lc = aa;
	if (lc > bb) lc = bb;

	return lc;
}