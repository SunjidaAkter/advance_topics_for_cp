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
    ll hc,dc,hm,dm,k,w,a;cin>>hc>>dc>>hm>>dm>>k>>w>>a;
    for(ll i=0;i<=k;i++){
        ll pdc=i*w+dc;
        ll phc=(k-i)*a+hc;
        ll x=(phc/dm)+1;
        if(phc%dm==0)x--;
        ll y=(hm/pdc)+1;
        if(hm%pdc==0)y--;
        if(x>=y){
            yes;return;
        }
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