#include<iostream>
#include<string>
using namespace std;
int main()
{
	char x;
	cin >> x;
	if (x >= 97 && x <= 122)
	{
		cout << "ALPHA" << endl;
		cout << "IS SMALL" << endl;
	}
	else if (x >= 65 && x <= 90)
	{
		cout << "ALPHA" << endl;
		cout << "IS CAPITAL" << endl;
	}
	else
	{
		cout << "IS DIGIT" << endl;
	}
}