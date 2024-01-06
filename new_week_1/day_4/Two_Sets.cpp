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
    if(n%4==0||n%4==3){
        yes;
        if(n%4==0){
            cout<<n/2<<nl;
            for(ll i=1;i<=n;i+=4)cout<<i<<" "<<i+3;
            cout<<nl;
            cout<<n/2<<nl;
            for(ll i=1;i<=n;i+=4)cout<<i+1<<" "<<i+2;
            cout<<nl;
        }
        if(n%4==3){
            cout<<n/2+1<<nl;
            cout<<1<<" "<<2<<" ";
            for(ll i=4;i<=n;i+=4)cout<<i<<" "<<i+3;
            cout<<nl;
            cout<<n/2<<nl;
            cout<<3<<" ";
            for(ll i=4;i<=n;i+=4)cout<<i+1<<" "<<i+2;
            cout<<nl;
        }
    }else no;
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