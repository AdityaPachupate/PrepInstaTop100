//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

void toBinary(int n)
{
    // your code herewhi
    vector<int> rem;
    int j =0;
    while(n!=0){
        rem.push_back(n%2);
        n=n/2;
        j++;
    }
    
    reverse(rem.begin(), rem.end());  
    
    for(auto it:rem){
        cout<<it;
    }
}

//{ Driver Code Starts.

int main() {
	//code
	
	int t;
	cin>>t;
	
	
	while(t--)
	{
	    int n;
	    cin>>n;
	    
	    toBinary(n);
	    cout<<endl;
	}
	return 0;
}
// } Driver Code Ends