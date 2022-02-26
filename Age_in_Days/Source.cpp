#include<iostream>
using namespace std;
int main()
{
	int num;
	cin >>num;
	int years = num/365;
	num = num%365;
	int months = num/30;
	num = num%30;

	cout << years << " years" << endl;
	cout << months << " months" << endl;
	cout << num<< " days" << endl;
}