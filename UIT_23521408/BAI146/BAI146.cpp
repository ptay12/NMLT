#include <iostream>
using namespace std;
bool KTDoiXung(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	if (KTDoiXung(n))
		cout << n << " la so doi xung";
	else
		cout << n << " ko la so doi xung";


	return 0;
}

bool KTDoiXung(int nn)
{
	int dv;
	int dn = 0;
	int t = nn;
	while (t != 0)
	{
		dv = t % 10;
		dn = dn * 10 + dv;
		t = t / 10;
	}
	if (dn == nn) return true;
	else return false;
}