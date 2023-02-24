#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int>tab = { 3,1,2,1};
    size_t x= 1;
    while (x <= 100)
    {
        cout << tab[(x++  - 1) % 4] << " ";
    }
}