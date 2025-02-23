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
    ll a[n][m];
    for(ll i=0;i<n;i++){
        for(ll j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    if(n==1&&m==1){
        cout<<-1<<nl;
        return;
    }
    // if(n==1){
        for(ll i=0;i<n;i++){
            ll x=a[i][0];
            for(ll j=1;j<m;j++){
                a[i][j-1]=a[i][j];
            }
            a[i][m-1]=x;
        }
    // }
    // if(m==1){
        for(ll j=0;j<m;j++){
            ll x=a[0][j];
            for(ll i=1;i<n;i++){
                a[i-1][j]=a[i][j];
            }
            a[n-1][j]=x;
        }
    // }
    for(ll i=0;i<n;i++){
        for(ll j=0;j<m;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<nl;
    }

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