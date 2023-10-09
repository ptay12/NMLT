#include <iostream>
using namespace std;
bool KTDang5m(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	if (KTDang5m(n)) cout << "La dang ";
	else cout << "Ko la dang";

	return 0;
}

bool KTDang5m(int nn)
{
	int du;
	bool flag = true;
	int t = nn;
	while (t > 1)
	{
		du = t % 5;
		if (du != 0) flag = false;
		t = t / 5;
	}
	if (flag) return true;
	else return false;
}