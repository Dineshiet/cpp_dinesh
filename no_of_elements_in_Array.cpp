#include <iostream> 
using namespace std; 
  
int main() 
{ 
    int arr[] = { 1, 2, 3, 4, 7, 98,  
    0, 12, 35, 99, 14 }; 
    cout << "Number of elements: "
    <<(sizeof(arr) / sizeof(arr[0])); 
    return 0; 
} 