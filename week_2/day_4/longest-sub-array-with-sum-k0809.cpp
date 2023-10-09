//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    int lenOfLongSubarr(int a[],  int n, int k) 
    { 
        int sum=0;
        vector<int>st;
        map<int,int>mp;
        for(int i=0;i<n;i++){
            sum+=a[i];
            if(sum==k)st.push_back(i+1);
            else{
                if(mp.find(sum-k)!=mp.end())st.push_back(i-mp[sum-k]);
            }
            if(mp.find(sum)==mp.end())mp[sum]=i;
        }
        if(st.empty())return 0;
        else{
            sort(st.begin(),st.end());
            return st[st.size()-1];
        }    
    } 

};

//{ Driver Code Starts.

int main() {
	//code
	
	int t;cin>>t;
	while(t--)
	{
	    int n, k;
	    cin>> n >> k;
	    int a[n];
	    
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	   Solution ob;
	   cout << ob.lenOfLongSubarr(a, n , k)<< endl;
	    
	}
	
	return 0;
}
// } Driver Code Ends