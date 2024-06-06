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
    if(is_sorted(all(v))){
        yes;return;
    }
    ll x;
    for(ll i=0;i<v.size()-1;i++){
        if(v[i]>v[i+1]){
            x=i;
            break;
        }
    }
    vector<ll>g;
    for(ll i=0;i<n;i++){
        if(i!=x){
            g.push_back(a[i]);
        }
    }
    vector<ll>gg;
    for(ll i=1;i<g.size();i++){
        gg.push_back(__gcd(g[i-1],g[i]));
    }
    if(is_sorted(all(gg))){
        yes;return;
    }
    g.clear();
    gg.clear();
    x++;
    // vector<ll>g;
    for(ll i=0;i<n;i++){
        if(i!=x){
            g.push_back(a[i]);
        }
    }
    // vector<ll>gg(g.size()-1);
    for(ll i=1;i<g.size();i++){
        gg.push_back(__gcd(g[i-1],g[i]));
    }
    if(is_sorted(all(gg))){
        yes;return;
    }
    g.clear();
    gg.clear();
    // cout<<nl;
    x++;
    // vector<ll>g;
    for(ll i=0;i<n;i++){
        if(i!=x){
            g.push_back(a[i]);
        }
    }
    // vector<ll>gg(g.size()-1);
    for(ll i=1;i<g.size();i++){
        gg.push_back(__gcd(g[i-1],g[i]));
    }
    // for(ll val:gg)cout<<val<<" ";
    if(is_sorted(all(gg))){
        yes;return;
    }
    g.clear();
    gg.clear();
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