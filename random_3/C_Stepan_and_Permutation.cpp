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
    ll n,x,y;cin>>n>>x>>y;
    vector<ll>v(n);
    for(ll i=0;i<n;i++)cin>>v[i];
    if(__gcd(x,y)>1){
        for(ll i=0;i<n;i++){
            if((abs(v[i]-(i+1))%__gcd(x,y))!=0){
                no;return;
            }
        }
        yes;    
    }else yes;
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