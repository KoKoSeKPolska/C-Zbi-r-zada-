
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    unsigned a;
    cout << "Podaj 3 liczby nie ujemne : " << endl;
    vector <unsigned> tab;
    for (int i = 0; i <= 2; i++)
    {
        cin >> a;
        tab.push_back(a);
    }
    unsigned x = 0;
    int suma;
    for (int i = 0; i < tab.size(); i++)
    {
        suma =+ tab[i];
        if (tab[i] > x)
        {
            x = tab[i];
        }

    }
    for (int i = 1; i <= x; i++)
    {
        cout << suma << endl;
    }

}
