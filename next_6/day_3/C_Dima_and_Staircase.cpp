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
    ll a[n];
    for(ll i=0;i<n;i++)cin>>a[i];
    ll m;cin>>m;
    vector<pii>b(m);
    for(ll i=0;i<m;i++){
        ll xx,yy;cin>>xx>>yy;
        b[i].first=xx,b[i].second=yy;
    }
    ll x=0,y=0;
    for(ll i=0;i<m;i++){
        if(x<b[i].first){
            y=max(y,a[b[i].first-1]);
            cout<<y<<nl;
            y+=b[i].second;
            x=b[i].first;
        }else{
            cout<<y<<nl;
            y+=b[i].second;
        }
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