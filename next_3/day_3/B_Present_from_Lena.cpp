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
    ll null=2*n;
    for(ll i=0;i<=n;i++){
        for(ll j=0;j<null;j++){
            cout<<" ";
        }
        for(ll j=0;j<=i;j++){
            if(i==0)cout<<j;
            else cout<<j<<" ";
        }
        for(ll j=i-1;j>=0;j--){
            if(j==0)cout<<j;
            else cout<<j<<" ";
        }
        null-=2;
        cout<<nl;
    }
    null+=4;
    for(ll i=n-1;i>=0;i--){
        for(ll j=0;j<null;j++){
            cout<<" ";
        }
        for(ll j=0;j<=i;j++){
            if(i==0)cout<<j;
            else cout<<j<<" ";
        }
        for(ll j=i-1;j>=0;j--){
            if(j==0)cout<<j;
            else cout<<j<<" ";
        }
        null+=2;
        cout<<nl;
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