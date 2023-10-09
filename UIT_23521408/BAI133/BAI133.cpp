#include <iostream>

using namespace std;

bool LaTamGiac(float x, float y, float z);
bool LaTamGiacDeu(float x, float y, float z);
bool LaTamGiacVuong(float x, float y, float z);
bool LaTamGiacVuongCan(float x, float y, float z);
bool LaTamGiacCan(float x, float y, float z);

int main()
{
    float x, y, z;
    cin >> x >> y >> z;

    if (LaTamGiac(x, y, z))
    {
        if (LaTamGiacDeu(x, y, z))
            cout << "Tam giac deu";
        else if (LaTamGiacVuong(x, y, z))
        {
            if (LaTamGiacVuongCan(x, y, z))
                cout << "Tam giac vuong can";
            else
                cout << "Tam giac vuong";
        }
        else if (LaTamGiacCan(x, y, z))
            cout << "Tam giac can";
        else
            cout << "Tam giac thuong";
    }
    else
        cout << "Khong la tam giac";

    return 0;
}

bool LaTamGiac(float x, float y, float z)
{
    return (x + y > z && x + z > y && y + z > x);
}

bool LaTamGiacDeu(float x, float y, float z)
{
    return (x == y && y == z);
}

bool LaTamGiacVuong(float x, float y, float z)
{
    return (x * x == y * y + z * z || y * y == z * z + x * x || z * z == y * y + x * x);
}

bool LaTamGiacVuongCan(float x, float y, float z)
{
    return (x == y || y == z || z == x);
}

bool LaTamGiacCan(float x, float y, float z)
{
    return (x == y || y == z || z == x);
}