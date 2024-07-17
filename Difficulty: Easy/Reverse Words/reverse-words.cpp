//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string str) 
    { 
       string ans;
        int len = str.length();
        int r = len;

        for(int i = len - 1; i >= 0; i--) {
            if(str[i] == '.') {
                ans.append(str.substr(i + 1, r - i - 1));
                ans.append(".");
                r = i;
            }
        }
        ans.append(str.substr(0, r));
        
        return ans;
    } 
};

//{ Driver Code Starts.
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        string s;
        cin >> s;
        Solution obj;
        cout<<obj.reverseWords(s)<<endl;
    }
}
// } Driver Code Ends