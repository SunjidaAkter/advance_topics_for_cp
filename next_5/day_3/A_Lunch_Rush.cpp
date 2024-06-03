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
    vector<pii>v(n);
    for(ll i=0;i<n;i++)cin>>v[i].first>>v[i].second;
    ll mx=LONG_MIN;
    for(ll i=0;i<n;i++){
        if(k<=v[i].second){
            mx=max(mx,v[i].first-(v[i].second-k));
        }else{
            mx=max(mx,v[i].first);
        }
    }
    cout<<mx<<nl;
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