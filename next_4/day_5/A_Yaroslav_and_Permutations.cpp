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
    if(n==1){
        yes;return;
    }
    ll a[n];
    for(ll i=0;i<n;i++)cin>>a[i];
    map<ll,ll>mp;
    for(ll i=0;i<n;i++){
        mp[a[i]]++;
    }
    ll mx=0;
    for(auto it:mp){
        mx=max(mx,it.second);
    }
    if((mx<=n/2&&n%2==0)||(mx*2-1<=n&&n%2!=0)){
        yes;return;
    }
    no;
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