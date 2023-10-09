#include <iostream>
#include <iomanip>
using namespace std;
void DayMuaDa(int);

int main()
{
	int n;
	cout << "Nhap n:";
	cin >> n;

	DayMuaDa(n);

	return 0;
}

void DayMuaDa(int nn)
{
	int ahh = nn;
	cout << ahh << setw(6);
	while (ahh != 1)
	{
		if (ahh % 2 == 0) ahh = ahh / 2;
		else ahh = 3 * ahh + 1;
		cout << ahh << setw(6);
	}
}