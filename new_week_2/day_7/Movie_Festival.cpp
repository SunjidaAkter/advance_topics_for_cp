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
    vector<pii>v;
    for(ll i=0;i<n;i++){
        ll x,y;cin>>x>>y;
        v.push_back({x,y});
    }
    sort(all(v));
    ll ans=0,cur=0;
    for(ll i=0;i<n;i++){
        if(i==0){
            cur=v[i].second;
            ans++;
        }else if(cur<=v[i].first){
            cur=v[i].second;
            ans++;
        }else if(cur>v[i].first){
            cur=min(cur,v[i].second);
        }
    }
    cout<<ans;
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