#include <iostream>
using namespace std;
int main()
{
	float f;
	char str[80];
	double d;
	cout << "Enter two floating point numbers: ";
	cin >> f >> d;
	cout << "Enter a string: ";
	cin >> str;
	cout << f << " " << d << " " << str;
	return 0;
}