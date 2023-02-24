#include <iostream>
using namespace std;
int main()
{
    float a, b;
    char znak;
    cout << "Podaj liczbe a:" << endl;
    cin >> a;
    cout << "Podaj liczbe b:" << endl;
    cin >> b;
    cout << "Podaj znak:" << endl;
    cin >> znak;
    switch (znak)
    {
    case '+':
        cout << "a + b = " << a + b << endl;
        break;
    case '-':
        if (a - b != b - a)
        {
            cout << "a - b = " << a - b << endl;
            cout << "b - a = " << b - a << endl;
        }
        else
        {
            cout << "a - b i b - a = " << a - b << endl;
        }
        break;
    case '*':
        if (a && b != 0.0)
        {
           cout << "a * b = " << a * b << endl;
        }
        else if (a || b == 0)
        {
            cout << "mnozenie przez 0!!" << endl;
        }
        break;
    case '/':
        if (a && b != 0.0)
        {
            if (a / b == b / a)
            {
                cout << "a / b i b / a = " << a / b << endl;
            }
            else
            {
                cout << "a / b = " << a / b << endl;
                cout << "b / a = " << b / a << endl;
            }


        }
        else if (a || b == 0)
        {
            cout << "dzielenie przez 0!!!" << endl;
        }
        break;
    default:
        cout << "Nieznany znak!" << endl;
        break;
    }
    return 0;


}
