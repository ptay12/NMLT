#include <iostream>
#include <iomanip>

using namespace std;

bool NamNhuan(int);

int main()
{
    int x,y;
    cout << "Nhap 2 nam: ";
    cin >> x >> y;
    int n = x;
    while (n <= y)
    {
        if (NamNhuan(n)) cout << n << setw(4);
        n = n + 1;
    }
    
    return 0;
}
bool NamNhuan(int nn)
{
    bool dk1 = ((nn % 4 == 0) && (nn % 100 != 0));
    bool dk2 = (nn % 400 == 0);
    return (dk1 or dk2);
}