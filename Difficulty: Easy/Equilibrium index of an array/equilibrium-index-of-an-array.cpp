//{ Driver Code Starts
#include <iostream>
using namespace std;
#include <stdio.h>
 
int findEquilibrium(int [], int );
 
int main() {
	int T;
	cin>>T;
	while(T--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		cout<<findEquilibrium (a,n)<<endl;
	}
	// your code goes here
	return 0;
}
// } Driver Code Ends


/* You are required to complete this method*/
int findEquilibrium(int a[], int n)
{
    int total= 0;
    int left=0;
    
    for(int i=0;i<n;i++){
        total+=a[i];
    }
  
     for(int i=0;i<n;i++){
         
        if(left == total-left-a[i]){
            return i;
        }  
        left+=a[i];
     }
     
     return -1;
}