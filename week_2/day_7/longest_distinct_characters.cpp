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
        // cout<<"s";

        cout << longestSubstrDistinctChars (S) << endl;
    }
}

// Contributed By: Pranay Bansal

// } Driver Code Ends


int longestSubstrDistinctChars (string s)
{
    // your code here
    int n=s.size();
    int mx=0,i=0,j=0;
    map<char,int>mp;
    while(j<n){
        mp[s[j]]++;
        if(mp.size()==(j-i+1)){
            int tmp=mp.size();
            mx=max(tmp,mx);
            j++;
        }else{
            while(mp.size()!=(j-i+1)){
                mp[s[i]]--;
                if(mp[s[i]]==0)mp.erase(s[i]);
                i++;
            }
            j++;
        }
    }
    return mx;
}