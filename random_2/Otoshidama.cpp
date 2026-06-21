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
    ll n,y;cin>>n>>y;
    for(ll i=0;i<=2000;i++){
        for(ll j=0;j<=2000;j++){
            if((y-i*10000-j*5000)%1000==0 && (y-i*10000-j*5000)/1000>=0 && (y-i*10000-j*5000)/1000==n-i-j){
                cout<<i<<" "<<j<<" "<<n-i-j<<nl;
                return;
            }
        }
    }
    cout<<-1<<" "<<-1<<" "<<-1<<nl;
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