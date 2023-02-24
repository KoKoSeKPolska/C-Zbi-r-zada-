#include <iostream>
using namespace std;
int main()
{
    int x = 0, y = 0;
    for (int i = 1; i <= 120; i++)
    {
        if (i % 5 == 0 && i % 11 == 0)
        {
            y++;
     
        }
        else
        {
            x++;
            cout << i << " ";
        }
    }
    cout << "liczb pominiętych: " << y << endl;
    cout << "ilość pozostałych liczb: " << x << endl;
}
