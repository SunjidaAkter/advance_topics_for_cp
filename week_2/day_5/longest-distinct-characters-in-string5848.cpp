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
    int i=0,j=0,mx=0;
    int fr[26]={0};
    int unq=0;
    while(j<n){
        fr[s[j]-'a']++;
        if(fr[s[j]-'a']==1)unq++;
        if(fr[s[j]-'a']>1){
            fr[s[j]-'a']--;
            while(fr[s[i]-'a']!=0){
                fr[s[i]-'a']--;
                i++;
            }
            unq=1;
            fr[s[j]-'a']=1;
        }
        if(mx<unq){
            mx=unq;
        }
        j++;
    }
    return mx;
}