#include <iostream>
using namespace std;
bool KTNguyenTo(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	if (KTNguyenTo(n))
		cout << n << " la so nguyen to";
	else
		cout << n << " ko la so nguyen to";


	return 0;
}

bool KTNguyenTo(int nn)
{
	int dem = 0;
	int i = 1;
	while (i <= nn)
	{
		if (nn % i == 0) dem++;
		i++;
	}
	if (dem == 2) return true;
	else return false;
}