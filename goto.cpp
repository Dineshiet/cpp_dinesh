// C++ program to print numbers 
// from 1 to 10 using goto statement 
#include <iostream> 
using namespace std; 

// function to print numbers from 1 to 10 
void printNumbers() 
{ 
	int n = 1; 
label1: 
	cout << n << " "; 
	n++; 
	if (n <= 10) 
		goto label1; 
label2:
  cout<< n*2<<endl;
  n++;
  if(n<=20)
    goto label2;
} 

// Driver program to test above function 
int main() 
{ 
	printNumbers(); 
	return 0; 
} 
