#include<iostream>
using namespace std;
int main()
{
	int num;
	cin >> num;
	num /= 1000;
	if (num % 2 == 0){
		cout << "EVEN" << endl;
	}
	else{
		cout << "ODD" << endl;
	}
}