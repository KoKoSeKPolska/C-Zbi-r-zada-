#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<char> samogloski = { 'a','e','i','o','u','y' };
	char a;
	cout << "sprawdz czy to samogłoska" << endl;
	cin >> a;
	if (a >= 48 && a <= 48 + 9)
	{
		cout << "to liczba" << endl;
		return 0;
	}
	for (auto s : samogloski)
	{
		if (a == s)
		{
			cout << " " << a << " jest samogłoska" << endl;
		}
		else
		{
			cout << a << "to spolgloska " << endl;
		}
		break;
	}

}