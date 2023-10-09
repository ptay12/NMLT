#include <iostream>
using namespace std;
bool TangDan(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	if (TangDan(n)) cout << "Tang dan";
	else cout << "Ko tang dan";

	return 0;
}

bool TangDan(int nn)
{
	int dv, hc;
	bool flag = true;
	int t = nn;
	while (t >= 10)
	{
		dv = t % 10;
		hc = (t / 10) % 10;
		if (hc > dv) flag = false;
		t = t / 10;
	}
	if (flag) return true;
	else return false;
}