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
    vector<ll>v;
    for(ll i=0;i<n;i++)cin>>a[i];
    for(ll i=1;i<n;i++){
        v.push_back(__gcd(a[i],a[i-1]));
    }
    ll cnt=0,x=v[0];
    for(ll i=1;i<v.size();i++){
        if(v[i-1]>v[i]){
            cnt++;
            x=v[i-1];
        }
    }
    for(ll val:v)cout<<val<<" n ";
    if(cnt>2)no;
    else yes;
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