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
    ll n,m;cin>>n>>m;
    ll a[n],b[m];
    ll mx=0,mn=LONG_MAX,lmt=LONG_MAX;
    for(ll i=0;i<n;i++){
        cin>>a[i];
        mx=max(mx,a[i]);
        mn=min(mn,a[i]);
    }
    for(ll i=0;i<m;i++){
        cin>>b[i];
        lmt=min(lmt,b[i]);
    }
    ll ans=max(2*mn,mx);
    if(ans<lmt){
        cout<<ans;         
    }else cout<<-1;
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