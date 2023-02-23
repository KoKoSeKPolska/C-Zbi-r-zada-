#include <iostream>
using namespace std;
int main()
{
    float a1, a2, a3, a4, a5;
    cout << "Wzór ((( a1 + a2) * a3) - a4) / a5:" << endl;
    cin >> a1 >> a2 >> a3 >> a4 >> a5;
    if (a5 == 0.0)
    {
        cout << "Nie wykonam działania, nie dziele przez 0" << endl;
    }
    else
    {
        float wynik = ((((a1 + a2) * a3) - a4) / a5);
        cout << "(((" << a1 << " + " << a2 << ") * " << a3 << ") - " << a4 << ") / " << a5 << " = " << wynik << endl;
    }


}