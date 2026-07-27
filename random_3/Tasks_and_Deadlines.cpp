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
    vector<pii>v(n);
    vector<pii>a(n);
    for(ll i=0;i<n;i++){
        ll x,y;cin>>x>>y;
        v[i]={x,y};
    }
    sort(all(v));
    ll sum=0,ans=0;
    for(ll i=0;i<n;i++){
        sum+=v[i].first;
        ans+=v[i].second-sum;
    }
    cout<<ans<<nl;
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
