//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
int longestSubstrDistinctChars (string S);
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string S; cin >> S;

        cout << longestSubstrDistinctChars (S) << endl;
    }
}

// Contributed By: Pranay Bansal

// } Driver Code Ends


int longestSubstrDistinctChars (string s)
{
    // your code here
    int n=s.size();
    int mx=0,i=0;
    map<char,int>mp;
    while(i<n){
        if(mp.count(s[i])==0){
            mp.insert({s[i],i});
            i++;
        }else{
            int tmp=mp.size();
            mx=max(mx,tmp);
            i=mp[s[i]]+1;
            mp.clear();
        }
    }
    int tmp=mp.size();
    mx=max(mx,tmp);
    return mx;
}