
#include <iostream>
using namespace std;

int main()
{
	int x, y;
	cout << "Please type the first number" << endl;
	cin >> x;
	cout << "Please type the second number" << endl;
	cin >> y;


	int sum = x + y;
	int subtract = x - y;
	int multi = x * y;
	float devide = x / y;
	int remainder = x % y;
	//45/34 1 reminder  11

	cout << "the sum is:" << sum << endl;
	cout << "the substraction is:" << subtract << endl;
	cout << "the multiplication is:" << multi << endl;
	cout << "the devision is:" << devide << endl;
	cout << "the remainder is:" << remainder << endl;
	return 0;
}