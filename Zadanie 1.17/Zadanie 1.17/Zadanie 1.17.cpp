#include <iostream>

using namespace std;

int main()
{
    int x = 6, y = 2;
    int i = 1;
    while (i <= 50)
    {
        cout << x << " " << y << " ";
        x += 2;
        y += 1;
        i++;
    }
}

