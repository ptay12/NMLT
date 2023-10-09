#include <iostream>
using namespace std;
void DayGiaTri(int);

int main()
{
	int n;
	cout << "Nhap n:";
	cin >> n;

	DayGiaTri(n);

	return 0;
}

void DayGiaTri(int nn)
{
	int t = 1;
	int i = 1;
	while (i <= nn)
	{
		t = t * i;
		cout << t << " ";
		i++;
	}
}