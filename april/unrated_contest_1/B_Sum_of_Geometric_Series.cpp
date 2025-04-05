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
    ll x=1e9,ans=1,i=1;
    // if(m==1){
    //     cout<<1+n<<nl;
    //     return;
    // }
    ll cnt=1;
    while(i<=m){
        cnt*=n;
        // cout<<cnt<<" n ";
        ans+=cnt;
        i++;
    }
    if(ans<=x&&ans>=0)cout<<ans<<nl;
    else cout<<"inf"<<nl;
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