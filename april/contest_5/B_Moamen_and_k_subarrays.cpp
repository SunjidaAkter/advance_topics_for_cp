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
    ll n,k;cin>>n>>k;
    vector<ll>a(n);
    for(ll i=0;i<n;i++)cin>>a[i];
    vector<pii>v;
    for(ll i=0;i<n;i++)v.push_back({a[i],i});
    sort(all(v));
    ll cnt=1;
    for(ll i=1;i<n;i++){
        if( (v[i].second-v[i-1].second)!=1)cnt++;
    }
    if(cnt<=k)Yes;
    else No;
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