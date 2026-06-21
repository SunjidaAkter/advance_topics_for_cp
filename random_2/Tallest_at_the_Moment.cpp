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
const ll N=1e9+7;
void solve(){
    ll n;cin>>n;
    vector<ll>h(n);
    vector<ll>l(n);
    for(ll i=0;i<n;i++){
        ll x,y;cin>>x>>y;
        h[i]=x;
        l[i]=y;
    }
    for(ll i=n-2;i>=0;i--){
        h[i]=max(h[i],h[i+1]);
    }
    ll q;cin>>q;
    while(q--){
        ll x;cin>>x;
        ll idx=upper_bound(all(l),x)-l.begin();
        // cout<<idx<<" ";
        cout<<h[idx]<<nl;
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