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
void solve(){
    string s;cin>>s;
    ll n=s.size();
    vector<ll>v(n);
    for(ll i=0;i<n;i++){
        if(i+1<n && s[i]==s[i+1]){
            v[i]=1;
        }else v[i]=0;
    }
    vector<ll>pref(n+1,0);
    for(ll i=1;i<=n;i++){
        pref[i]=pref[i-1]+v[i-1];
    }
    ll q;cin>>q;
    while(q--){
        ll l,r;cin>>l>>r;
        if(v[r-1]==1)cout<<pref[r]-pref[l-1]-1<<nl;
        else cout<<pref[r]-pref[l-1]<<nl;
    }
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