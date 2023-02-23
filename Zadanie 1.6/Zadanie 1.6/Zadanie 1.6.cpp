#include <iostream>
using namespace std;
int main()
{
    int a;
    int ile_p = 0, ile_np = 0;

    for (int i = 1; i <= 5; i++)
    {
        cin >> a;
        if (a % 2 == 1)
        {
            ile_np++;
        }
        else
        {
            ile_p++;
        }
    }
    cout << "Ilosc liczb parzystych:" << ile_p << endl;
    cout << "Ilosc liczb nieparzystych:" << ile_np << endl;
}

