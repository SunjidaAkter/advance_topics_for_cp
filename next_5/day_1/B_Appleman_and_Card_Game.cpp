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
    ll n,k;cin>>n>>k;
    string s;cin>>s;
    map<char,ll>mp;
    for(ll i=0;i<n;i++){
        mp[s[i]]++;
    }
    vector<pair<ll,char>>v;
    for(auto i:mp){
        v.push_back({i.second,i.first});
    }
    sort(all(v));
    reverse(all(v));
    vector<char>vv;
    vector<char>vvv;
    for(ll i=0;i<v.size();i++){
        for(ll j=0;j<v[i].first;j++){
            vv.push_back(v[i].second);
        }
    }
    for(ll i=0;i<k;i++){
        vvv.push_back(vv[i]);
    }
    map<char,ll>mpp;
    for(ll i=0;i<k;i++){
        mpp[vvv[i]]++;
    }
    ll sum=0;
    for(auto it:mpp)sum+=(it.second*it.second);
    cout<<sum<<nl;
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