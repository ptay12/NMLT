#include <iostream>
using namespace std;
void DayGiaTri(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	DayGiaTri(n);

	return 0;
}

void DayGiaTri(int nn)
{
	float S = 0;
	int i = 1;
	while (i <= nn)
	{
		S = S + (float)1/i;
		cout << S << " ";
		i++;
	}
}