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
    ll a[5][5];
     memset(a,0,sizeof(a));
    for(ll i=1;i<=3;i++){
        for(ll j=1;j<=3;j++){
            cin>>a[i][j];
        }
    }
    for(ll i=1;i<=3;i++){
        for(ll j=1;j<=3;j++){
            ll cnt=a[i][j]+a[i-1][j]+a[i+1][j]+a[i][j+1]+a[i][j-1];
            if(cnt%2==0)cout<<1;
            else cout<<0;
        }
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