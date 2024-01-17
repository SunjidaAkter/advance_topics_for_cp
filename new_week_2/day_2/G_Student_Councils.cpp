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
ll k,n;
ll a[55];
bool good(ll x){
    ll slots=x*k;
    for(ll i=0;i<n;i++){
        slots-=min(x,a[i]);
    }
    return slots<=0;
}
void solve(){
    cin>>k>>n;
    for(ll i=0;i<n;i++)cin>>a[i];
    ll l=0,r=1;
    while(good(r)){
        r*=2;
    }
    while(r>l+1){
        ll m=l+((r-l)/2);
        if(good(m))l=m;
        else r=m;
    }
    cout<<l<<nl;
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