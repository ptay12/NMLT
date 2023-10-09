#include <iostream>
using namespace std;
bool KTChinhPhuong(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	if (KTChinhPhuong(n))
		cout << n << " la so chinh phuong";
	else
		cout << n << " ko la so chinh phuong";


	return 0;
}

bool KTChinhPhuong(int nn)
{
	bool flag = false;
	int i = 0;
	while (i <= nn)
	{
		if (i * i == nn) flag = true;
		i++;
	}
	if (flag) return true;
	else return false;
}