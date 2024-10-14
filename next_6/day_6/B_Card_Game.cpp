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
    ll a[2],b[2];
    for(ll i=0;i<2;i++)cin>>a[i];
    for(ll i=0;i<2;i++)cin>>b[i];
    ll ans=0;
    for(ll i=0;i<2;i++){
        for(ll j=0;j<2;j++){
            ll r=0;
            for(ll k=0;k<2;k++){
                r+=(a[i^k]>b[j^k]);
                r-=(a[i^k]<b[j^k]);
                // else r--;
            }
            if(r>0)ans++;
        }
    }
    cout<<ans<<nl;
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