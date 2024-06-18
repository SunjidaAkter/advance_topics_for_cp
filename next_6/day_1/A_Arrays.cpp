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
    ll x,y;cin>>x>>y;
    ll k,m;cin>>k>>m;
    ll a[x],b[y];
    for(ll i=0;i<x;i++)cin>>a[i];
    sort(a,a+x);
    for(ll i=0;i<y;i++)cin>>b[i];
    sort(b,b+y);
    vector<ll>v1;
    vector<ll>v2;
    for(ll i=0;i<k;i++)v1.push_back(a[i]);
    for(ll i=0;i<m;i++)v2.push_back(b[i]);
    if(v1.back()<v2[0])yes;
    else no;
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