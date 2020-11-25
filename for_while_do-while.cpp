// C++ program to illustrate for loop 
#include <iostream> 
#define limit 60
using namespace std; 

int main() 
  { 
  int j;
	for (j=50;j <= limit; j++) 
	{ 
		cout << "Hello  World\n"; 
	} 
   j=0;
   while (j< 70) 
    { 
        cout << "Hello Worlddd\n"; 
  
        // update expression 
        j++; 
    } 
  do 
  {
      cout <<"do while do while \n";
      j--;
    } while (j>1);
  
	return 0; 
} 