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
    ll a[n],res[n];
    for(ll i=0; i<n; i++)cin>>a[i];
    ll mn=0,mx=1;
    set<ll>s;
    for(ll i=0; i<n; i++){
        if(s.count(mn-a[i])||mn-a[i]<0){
            res[i]=mx-a[i];
        }else res[i]=mn-a[i];
        if(res[i]==mn){
            mn=mx;
            mx++;
            while(s.count(mx))mx++;
        }else if(res[i]==mx){
            mx++;
            while(s.count(mx))mx++;
        }
        s.insert(res[i]);
    }
    for(ll val:res)cout<<val<<" ";
    cout<<nl;
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