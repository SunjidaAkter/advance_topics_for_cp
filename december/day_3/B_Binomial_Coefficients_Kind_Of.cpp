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
const ll mod =1e9+7;
ll power_of_two(ll k){
    ll res=1,base=2;
    while(k){
        if(k&1)k--,res=((res%mod)*(base%mod))%mod;
        else{
            k/=2;
            base=((base%mod)*(base%mod))%mod;

        }
    }
    return res%mod;
}
void solve(){
    ll test;cin>>test;
    ll n[test],k[test];
    for(ll i=0;i<test;i++){
        cin>>n[i];
    }
    for(ll i=0;i<test;i++){
        cin>>k[i];
        cout<<power_of_two(k[i])<<nl;
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