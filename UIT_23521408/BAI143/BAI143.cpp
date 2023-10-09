#include <iostream>
using namespace std;
bool KTHoanThien(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	if (KTHoanThien(n)) 
		cout << n << " la so hoan thien";
	else 
		cout << n << " ko la so hoan thien";
	

	return 0;
}

bool KTHoanThien(int nn)
{
	int S = 0;
	int i = 1;
	while (i < nn)
	{
		if (nn % i == 0) S = S + i;
		i++;
	}
	if (S == nn) return true;
	else return false;
}