#include <iostream>
using namespace std;
bool parz(int x)
{
    if (x % 2 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int x;
    cout << "podaj liczbe calkowita: " << endl;
    cin >> x;
    if (x < 0)
    {
        x--;
        cout << x << endl;
        if (parz(x) == true)
        {
            cout << "liczba " << x << " jest parzysta" << endl;
        }
        else
        {
            cout << "liczba " << x << " jest nieparzysta" << endl;
        }
    }
    else if (x > 0)
    {
        x++;
        cout << x << endl;
        if (parz(x) == true)
        {
            cout << "liczba " << x << " jest parzysta" << endl;
        }
        else
        {
            cout << "liczba " << x << " jest nieparzysta" << endl;
        }
    }
    else if (x == 0)
    {
        cout << x << endl;
    }

    return 0;
}
