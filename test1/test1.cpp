#include <iostream>
using namespace std;
int main()
{
	int i,a,b;
	cout << "This is output.\n"; // this is a single line comment
	/* you can still use C style comments */
	// input a number using >>
	cout << "Enter a number: ";
	cin >> i;
	cin >> a;
	cin >> b;
	printf("%d  %d \n", a, b);
	//printf("\n");
	// now, output a number using <<
	cout << i << " squared is " << i * i << "\n";
	cout << "i*a*b ="<< i * a * b << "\n";
	return 0;
}