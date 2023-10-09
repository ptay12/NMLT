#include <iostream>

using namespace std;

bool NamNhuan(int);

int main()
{
    int n;
    cout << "Nhap nam: ";
    cin >> n;

    if (NamNhuan(n)) cout << n << " la nam nhuan";
    else cout << n << " khong la nam nhuan";

    return 0;
}
bool NamNhuan(int nn)
{
    bool dk1 = ((nn % 4 == 0) && (nn % 100 != 0));
    bool dk2 = (nn % 400 == 0);
    return (dk1 or dk2);
}