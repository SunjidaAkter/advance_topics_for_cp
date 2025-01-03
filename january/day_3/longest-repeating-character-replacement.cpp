#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define all(X) (X).begin(), (X).end()
#define nl '\n'
#define yes cout<<"YES"<<nl
#define no cout<<"NO"<<nl
#define Yes cout<<"Yes"<<nl
#define No cout<<"No"<<nl
#define FAST ios_base :: sync_with_stdio (false) ; cin.tie(0) ; cout.tie(0)
typedef pair<ll,ll>pii;
int characterReplacement(string s, int k) {
        int l=0,r=0,mxf=0,mx=0;
        vector<int>freq(26,0);
        while(r<s.size()){
            freq[s[r]-'A']++;
            mxf=max(mxf,freq[s[r]-'A']);
            while(((r-l+1)-mxf)>k){
                freq[s[l]-'A']--;
                mxf=0;
                for(int i=0;i<26;i++)mxf=max(mxf,freq[i]);
                l++;
            }
            if(((r-l+1)-mxf<=k))mx=max(mx,r-l+1);
            r++;
        }
        return mx;
    }
void solve(){
    string s;ll k;cin>>s>>k;
    cout<<characterReplacement(s,k)<<nl;
}
int main(){
    FAST;
    int t=1;
    // cin>>t;
    while(t--){
        solve();
    }
    return 0;
}