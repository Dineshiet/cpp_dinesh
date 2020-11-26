// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends


class Solution
{   
public:
    string isInRange(int N)
    {
        switch(N)
        {
        case 1:
        cout<<"this is cases 1 \n";
        break;
        case 2:
         cout<<"this is cases 2 \n";
        break;
        case 3:
         cout<<"this is cases 3 \n";
        break;
        case 4:
         cout<<"this is cases 4 \n";
        break;
        default:
            cout << "Choice other than 1, 2 and 3 or 4";
        break;
        }    // code here 
    return 0;
    }
};

// { Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    cout<<t<<endl;
    while(t>0)
    {
        int N;
        cin >> N;
        cout<<t <<"\t "<<N<<endl;
        Solution ob;
        cout << ob.isInRange(N) << endl;
        cout<<t<<endl;
        t--;
    }
    return 0; 
}   // } Driver Code Ends