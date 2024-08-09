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
    ll a[n];
    for(ll i=0;i<n;i++)cin>>a[i];
    ll p=0;
    while(m--){
        ll tt;cin>>tt;
        if(tt==1){
            ll v,x;cin>>v>>x;
            a[v-1]=x;
            a[v-1]-=p;
        }
        if(tt==2){
            ll v;cin>>v;
            p+=v;
        }
        if(tt==3){
            ll v;cin>>v;
            a[v-1]+=p;
            cout<<a[v-1]<<nl;
            a[v-1]-=p;
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