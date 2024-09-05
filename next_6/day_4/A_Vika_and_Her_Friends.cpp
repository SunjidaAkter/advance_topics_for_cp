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
    ll m,n,k;cin>>m>>n>>k;
    ll x,y;cin>>x>>y;
    vector<pii>v;
    for(ll i=0;i<k;i++){
        ll a,b;cin>>a>>b;
        v.push_back({a,b});
    }
    for(ll i=0;i<k;i++){
        if((abs(v[i].first-x)+abs(v[i].second-y))%2==0){
            no;
            return;
        }
    }
    yes;
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