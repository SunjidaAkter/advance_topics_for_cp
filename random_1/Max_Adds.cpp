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
// * Instead of tracking exact values, track possible bounds (min / max).
// *👉 Pattern name: Range propagation / feasible interval
void solve(){
    ll n,m;cin>>n>>m;
    vector<ll>a(n);
    vector<ll>b(n);
    for(ll i=0;i<n;i++)cin>>a[i];
    for(ll i=0;i<n;i++)cin>>b[i];
    ll l=1,r=m;
    for(ll i=0;i<n;i++){
        l=max(l+b[i],a[i]);
        r=max(r+b[i],a[i]);
    }
    cout<<l*(m-(r-l))+(r*(r+1)/2)-(l*(l+1)/2)<<nl;
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