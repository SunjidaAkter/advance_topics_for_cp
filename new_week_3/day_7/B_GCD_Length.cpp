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
    ll a,b,c;cin>>a>>b>>c;
    ll x=pow(10,c-1);
    ll y=pow(10,c-1);
    while(x<(ll)pow(10,a-1)){
        x*=2;
    }
    while(y<(ll)pow(10,b-1)){
        y*=3;
    }
    cout<<x<<" "<<y<<nl;
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