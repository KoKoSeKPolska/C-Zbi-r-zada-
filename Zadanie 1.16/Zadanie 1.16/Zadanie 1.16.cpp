#include <iostream>

using namespace std;
int main()
{
    int x = 100, y = 0;
    for(int i = 1; i <= 100; i++)
    {
        x = x - y++;
        cout << x << " ";
    }
}
