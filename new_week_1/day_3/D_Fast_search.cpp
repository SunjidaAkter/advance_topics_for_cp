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
    sort(a,a+n);
    ll k;cin>>k;
    while(k--){
        ll x,y;cin>>x>>y;
        ll l=-1,r=n;
        while(r>l+1){
            ll m=(l+r)/2;
            if(a[m]<x)l=m;
            else r=m;
        }
        ll left=r+1;
        l=-1,r=n;
        while(r>l+1){
            ll m=(l+r)/2;
            if(a[m]<=y)l=m;
            else r=m;
        }
        ll right=l+1;
        cout<<(right-left+1)<<" ";
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