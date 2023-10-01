//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:
	int search(string pat, string txt) {
	    // code here
	    int j=0,i=0;
	    int sum=0;
	    int fr1[26]={0};
	    int fr2[26]={0};
	    int n=txt.size();
	    for(char c:pat){
	        fr1[c-'a']++;
	    }
	    while(j<n){
	        fr2[txt[j]-'a']++;
	        if(j>=pat.size()-1){
	            bool flag=true;
	            for(int v=0;v<26;v++){
	                if(fr1[v]!=fr2[v]){
	                    flag=false;
	                    break;
	                }
	            }
	            if(flag)sum++;
	            fr2[txt[i]-'a']--;
	            i++;
	        }
	        j++;
	    }
	    return sum;
	}

};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string pat, txt;
        cin >> txt >> pat;
        Solution ob;
        auto ans = ob.search(pat, txt);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends