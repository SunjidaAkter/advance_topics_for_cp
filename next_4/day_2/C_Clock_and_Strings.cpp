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
bool is_ordered(ll x,ll y,ll z){
    return ((x<y && y<z) || (z<x && x<y)|| (y<z && z<x));
}
void solve(){
    ll a,b,c,d;cin>>a>>b>>c>>d;
    if((is_ordered(a,c,b)&& !is_ordered(a,d,b))||(!is_ordered(a,c,b)&& is_ordered(a,d,b))){
        yes;return;
    }
    no;
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