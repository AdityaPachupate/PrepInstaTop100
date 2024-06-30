//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int gcd(int a, int b) {
        if( a % b == 0 || b % a == 0)
          return a<b?a:b;
          
        int A = a, B = b;
        int t = B;
        while( A%B != 0 )  //a = b & b = a % b
       {
            t = B;
            B = A % B;
            A = t;
        }
        return B;
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    scanf("%d ",&t);
    while(t--){
        
        int a;
        scanf("%d",&a);
        
        
        int b;
        scanf("%d",&b);
        
        Solution obj;
        int res = obj.gcd(a, b);
        
        cout<<res<<endl;
        
    }
}

// } Driver Code Ends