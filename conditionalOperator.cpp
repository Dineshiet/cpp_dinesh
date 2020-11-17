/*Conditional Operator: Conditional operator is of the form Expression1 ? Expression2 : Expression3 . Here, Expression1 is the condition to be evaluated. If the condition(Expression1) is True then we will execute and return the result of Expression2 otherwise if the condition(Expression1) is false then we will execute and return the result of Expression3. We may replace the use of if..else statements by conditional operators. To learn about conditional operators in details, visit this link.*/


#include<iostream> 
using namespace std; 

int main() 
{ 
int test = 5; 
cout << "First character " << '1' << endl; 
cout << "Second character " << (test ? 3 : '1') << endl; 
  // int test = 0; 
   float fvalue = 3.111f; 
   cout << (test ? fvalue : 0) << endl; 
  

return 0; 
} 
