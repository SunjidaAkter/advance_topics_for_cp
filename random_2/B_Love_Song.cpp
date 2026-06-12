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
    ll n,q;cin>>n>>q;
    string s;cin>>s;
    // vector<ll>v(n);
    vector<ll>pref(n+1,0);
    for(ll i=0;i<s.size();i++){
        pref[i+1]=pref[i]+(s[i]-'a'+1);
    }
    for(ll i=0;i<q;i++){
        ll l,r;cin>>l>>r;
        cout<<pref[r]-pref[l-1]<<nl;
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