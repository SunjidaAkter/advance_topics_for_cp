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
    vector<ll>v;
    for(ll i=0;i<n;i++){
        if(abs(a[i]-(i+1))!=0)v.push_back(abs(a[i]-(i+1)));
    }
    ll gcd=0;
    for(ll i=0;i<v.size();i++)gcd=__gcd(gcd,v[i]);
    cout<<gcd<<nl;
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