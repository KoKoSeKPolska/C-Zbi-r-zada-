#include <iostream>

using namespace std;

int main()
{
    int x = 1, y = 0;
    int ile = 1;
    while (ile <= 100)
    {
        if (y++ < x)
        {
            cout << x << " ";
            ile++;
        }
        else
        {
            y = 0;
            x++;
        }
    }
    

}