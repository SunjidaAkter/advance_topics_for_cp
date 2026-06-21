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
    vector<vector<ll>>v(n);
    for(ll i=0;i<n;i++){
        ll x;cin>>x;
        v[i].resize(x);
        for(ll j=0;j<x;j++)cin>>v[i][j];
    }
    vector<vector<ll>>ans(n);
    for(ll i=0;i<n;i++){
        ll m=v[i].size();
        for(ll j=0;j<m;j++){
            ans[v[i][j]-1].push_back(i);
        }
    }
    for(ll i=0;i<n;i++){
        cout<<ans[i].size()<<" ";
        for(ll j=0;j<ans[i].size();j++){
            cout<<ans[i][j]+1<<" ";
        }
        cout<<nl;
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