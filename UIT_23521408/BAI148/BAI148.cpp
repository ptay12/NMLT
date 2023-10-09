#include <iostream>
using namespace std;
bool KTToanChan(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	if (KTToanChan(n))
		cout << n << " la so toan chan";
	else
		cout << n << " ko la so toan chan";


	return 0;
}

bool KTToanChan(int nn)
{
	int dv;
	bool flag = true;
	int t = nn;
	while (t != 0)
	{
		dv = t % 10;
		if (dv % 2 != 0) flag = false;
		t = t / 10;
	}
	if (flag) return true;
	else return false;
}