#include <iostream>
using namespace std;

int main()
{
    int x = 0 , y = 0;
    while (y == 0)
    {
        cin >> x;
        if (x <= 10 and x > 1)
        {
            cout << "twoja liczba: " << x << endl;
            y++;
        }
        else
        {
            cout << x * 2 << endl;
        }
    }
}
