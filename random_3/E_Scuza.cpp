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
    vector<ll>v(n);
    for(ll i=0;i<n;i++)cin>>v[i];
    vector<ll>pref_mx(n+1,0);
    vector<ll>pref_sm(n+1,0);
    for(ll i=1;i<=n;i++){
        pref_mx[i]=max(pref_mx[i-1],v[i-1]);
        pref_sm[i]=pref_sm[i-1]+v[i-1];
    }
    while (q--){
        ll x;cin>>x;
        ll idx=upper_bound(all(pref_mx),x)-pref_mx.begin();
        cout<<pref_sm[idx-1]<<" ";
    }
    cout<<nl;
}
int main(){
    FAST;
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}