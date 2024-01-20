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
    vector<ll>a(n);
    for(ll i=0;i<n;i++)cin>>a[i];
    sort(all(a));
    ll s=0;
    for(ll i=0;i<n;i++)s+=a[i];
    ll m;cin>>m;
    while(m--){
        ll x,y;cin>>x>>y;
        ll ans=x+y;
        auto it=lower_bound(all(a),x);
        if(it!=a.end()){
            ans=max(0LL,y-(s-*it));
        }
        if(it!=a.begin()){
            it--;
            ans=min(max(0LL,y-(s-*it))+(x-*it),ans);
        }
        cout<<ans<<nl;
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