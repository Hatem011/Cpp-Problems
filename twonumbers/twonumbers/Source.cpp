#include<iostream>
using namespace std;
int main()
{
	double num1, num2;
	cin >> num1>>num2;
	double res = num1 / num2;
	cout << "floor " << num1 << " / " << num2 << " = " << floor(res) << endl;
	cout << "ceil " << num1 << " / " << num2 << " = " << ceil(res) << endl;
	cout << "round " << num1 << " / " << num2 << " = " << round(res) << endl;
}