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
    vector<ll>v(n);
    for(ll i=0;i<n;i++)cin>>v[i];
    ll mn=LONG_MAX,mn_idx;
    sort(all(v));
    for(ll i=1;i<n;i++){
        if(abs(v[i-1]-v[i])<mn){
            mn=abs(v[i-1]-v[i]);
            mn_idx=i-1;
        }
    }
    // sob mone ashtesilo
    cout<<v[mn_idx]<<" ";
    for(ll i=mn_idx+2;i<n;i++)cout<<v[i]<<" ";// but ei line
    for(ll i=0;i<mn_idx;i++)cout<<v[i]<<" ";// r ei line mane majher gulare j kivabe sort korte hobe ei idea ta ashtesilo na
    cout<<v[mn_idx+1]<<nl;
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