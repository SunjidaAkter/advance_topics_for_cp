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
ll a,b,n;
bool good(ll x){
    return ((x/a)*(x/b))>=n;
}
void solve(){
    cin>>a>>b>>n;
    ll l=0,r=1;
    while(!good(r))r*=2;
    while(r>l+1){
        ll m=(l+r)/2;
        if(!good(m))l=m;
        else r=m;
    }
    cout<<r;
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