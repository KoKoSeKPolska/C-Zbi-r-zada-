#include <iostream>
using namespace std;

int main()
{
    int ile = 0;
    char x;
    while (cin >> x)
    {
        ile++;
        if (x == 'x')
        {
            cout << "liczba prob: " << ile << endl;
            return 0;
        }
    }
}
