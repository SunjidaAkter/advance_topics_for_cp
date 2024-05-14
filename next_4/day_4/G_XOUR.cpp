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
    ll a[n],ans[n];
    for(ll i=0;i<n;i++)cin>>a[i];
    map<ll,vector<pii>>mp;
    for(ll i=0;i<n;i++){
        ll x=a[i];
        ll one=1,two=2;
        if(x&one)x-=one;
        if(x&two)x-=two;
        mp[x].push_back({a[i],i});
    }
    for(auto it:mp){
        vector<ll>idx;
        sort(all(it.second));
        for(auto val:it.second)idx.push_back(val.second); 
        sort(all(idx));
        for(ll i=0;i<idx.size();i++)ans[idx[i]]=it.second[i].first;
    }
    for(ll val:ans)cout<<val<<" ";
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