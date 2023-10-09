#include <iostream>
using namespace std;
bool KTDang2m(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	if (KTDang2m(n)) cout << "La dang ";
	else cout << "Ko la dang";

	return 0;
}

bool KTDang2m(int nn)
{
	int du;
	bool flag = true;
	int t = nn;
	while (t > 1)
	{
		du = t % 2;
		if (du != 0) flag = false;
		t = t / 2;
	}
	if (flag) return true;
	else return false;
}