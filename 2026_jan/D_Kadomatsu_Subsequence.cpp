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
    vector<ll>a(n);
    for(ll i=0;i<n;i++)cin>>a[i];
    map<ll,vector<ll>>mp[3];
    for(ll i=0;i<n;i++){
        if(a[i]%3==0)mp[0][a[i]/3].push_back(i);
        if(a[i]%5==0)mp[1][a[i]/5].push_back(i);
        if(a[i]%7==0)mp[2][a[i]/7].push_back(i);
    }
    ll ans=0;
    for(auto &x:mp[1]){
        for(auto &y:x.second){
            if(mp[0][x.first].empty())continue;
            if(mp[2][x.first].empty())continue;
            ll it1=lower_bound(mp[0][x.first].begin(),mp[0][x.first].end(),y)-mp[0][x.first].begin();
            ll ans1=mp[0][x.first].size()-it1;
            ll it2=lower_bound(mp[2][x.first].begin(),mp[2][x.first].end(),y)-mp[2][x.first].begin();
            ll ans2=mp[2][x.first].size()-it2;
            ans+=ans1*ans2;
            ans+=it1*it2;
        }
    }
    cout<<ans<<nl;
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