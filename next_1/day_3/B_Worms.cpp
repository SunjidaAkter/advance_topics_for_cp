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
    ll n;cin>>n;
    ll a[n];
    for(ll i=0;i<n;i++)cin>>a[i];
    vector<ll> pre(n);pre[0]=a[0];
    for(ll i=1;i<n;i++)pre[i]=pre[i-1]+a[i];
    ll q;cin>>q;
    while(q--){
        ll x;cin>>x;
        ll ans=lower_bound(pre.begin(),pre.end(),x)-pre.begin();
        cout<<ans+1<<nl;
    }
    // for(ll i=0;i<n;i++)cout<<pre[i]<<" ";
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