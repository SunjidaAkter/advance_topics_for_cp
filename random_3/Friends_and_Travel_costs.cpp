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
    vector<pii>ans;
    for(ll i=0;i<n;i++){
        ll x,y;cin>>x>>y;
        v[i].first=x;
        v[i].second=y;
    }
    sort(all(v));
    ll i=0,prev=0;
    while((v[i].first-prev)<=k&&i<v.size()){
        k-=(v[i].first-prev);
        k+=v[i].second;
        prev=v[i].first;
        i++;
    }
    cout<<v[i-1].first+k<<nl;
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