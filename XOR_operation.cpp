/*The bitwise XOR operator is the most useful operator from technical interview perspective. It is used in many problems. A simple example could be “Given a set of numbers where all elements occur even number of times except one number, find the odd occurring number” This problem can be efficiently solved by just doing XOR of all numbers.*/
#include <stdio.h> 
// Function to return the only odd 
// occurring element 
int findOdd(int arr[], int n) 
{ 
	int res = 0, i; 
	for (i = 0; i < n; i++) 
    { printf("%d, %d \n", res,arr[i]);
	  res =res^arr[i];}
  	return res; 
} 
// Driver Method 
int main(void) 
{ 
	int arr[] = { 12, 12, 14, 90, 14, 14, 14 }; 
	int n = sizeof(arr) / sizeof(arr[0]); 
    int m= sizeof(arr[0]);  
    printf("%d,%d \n",n,m);
	printf("The odd occurring element is %d ", 
		findOdd(arr, n)); 
	return 0; 
} 