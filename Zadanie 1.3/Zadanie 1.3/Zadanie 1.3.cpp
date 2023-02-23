#include <iostream>
using namespace std;
int main()
{
    int a;
    cin >> a;
    if (a % 3 == 0 && a % 5 == 0)
    {
        cout << a << " jest podzielne przez 3 i 5" << endl;
    }
    else if (a % 3== 0 && a % 5 != 0)
    {
        cout << a << " jest podzielne przez 3 ale nie przez 5" << endl;
    }
    else if (a % 3 != 0 && a % 5 == 0)
    {
        cout << a << " jest podzielne przez 5 ale nie przez 3" << endl;
    }
    else if (!(a % 3 == 0 && a % 5 == 0))
    {
        cout << a << " nie jest podzielne przez 5 i 3" << endl;
    }
}