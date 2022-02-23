#include<iostream>
using namespace std;
int main()
{
	long long num1, num2;
	cin >> num1>>num2;
	int firstdigit = num1 % 10;
	int lastdigit = num2 % 10;
	cout << firstdigit + lastdigit << endl;

}