﻿#include <iostream>
using namespace std;
int main()
{
    int x = 1;
    int y = 1;
    for (int i = 1; i <= 100; i++)
    {
        cout << "," << i;
    }
    cout << endl;
    cout << endl;
    cout << endl;
    while (x <= 100)
    {
        cout << "," << x++;
    }
    cout << endl;
    cout << endl;
    cout << endl;
    do
    {
        cout << "," << y++;
    } 
    while (y <= 100);
}
