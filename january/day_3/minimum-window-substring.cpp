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
string minWindow(string s, string t) {
        int l=0,r=0,mn=INT_MAX,cnt=t.size(),start=0;
        vector<int>mp(128,0);
        for(int i=0;i<t.size();i++)mp[t[i]]++;
        while(r<s.size()){
            if(mp[s[r++]]-- >0)cnt--;
            while(cnt==0){
                if(mn>r-l){
                    mn=r-l;
                    start=l;
                }
                if(mp[s[l++]]++==0)cnt++;
            }
        }
        if(mn==INT_MAX) return "";
        else return s.substr(start,mn);
    }
void solve(){
    string s,p;cin>>s>>p;
    string ans=minWindow(s,p);
    cout<<ans;    
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