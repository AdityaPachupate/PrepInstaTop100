//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string x)
    {
        // First declare a stack 
        stack<char> st;
        
        for(int i=0;i<x.length();i++){
            
            if(x[i]=='(' ||x[i]=='{'||x[i]=='[' ){
                st.push(x[i]);
            }else{
                
                // There is no opening bracke to the corresponding closing bracket
                if(st.empty()) return false;
                
                // If the current character belongs to closing bracket    
                if(x[i]==')' ||x[i]=='}'||x[i]==']'){
                    char top = st.top();
                    
                    if(top=='(' && x[i]==')' ||top=='{' && x[i]=='}'||top=='[' && x[i]==']'){
                        st.pop();
                    }
                    else{
                        return false;
                    }
                }
            }
            
            
        }
        
        if(st.empty()) return true;
            return false;
    }

};

//{ Driver Code Starts.

int main()
{
   int t;
   string a;
   cin>>t;
   while(t--)
   {
       cin>>a;
       Solution obj;
       if(obj.ispar(a))
        cout<<"balanced"<<endl;
       else
        cout<<"not balanced"<<endl;
   }
}
// } Driver Code Ends