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
    vector<ll>v(n+1);
    for(ll i=1;i<=n;i++)cin>>v[i];
    for(ll i=1;i<=n;i+=2){
        for(ll j=i;j<=n;j*=2){
            for(ll k=2*i;k<=n;k*=2){
                if(v[k/2]>v[k])swap(v[k/2],v[k]);
            }
        }
    }
    if(is_sorted(all(v)))yes;
    else no;
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