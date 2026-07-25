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
        v.push_back({y,x});
    }
    sort(all(v));
    ll cnt=1,cur=v[0].first;
    for(ll i=1;i<n;i++){
        if(cur<=v[i].second){
            cnt++;
            cur=v[i].first;
        }
    }
    cout<<cnt<<nl;
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