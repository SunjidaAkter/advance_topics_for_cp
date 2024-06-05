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
    ll a[n],b[n];
    for(ll i=0; i<n;i++)cin>>a[i];
    for(ll i=0; i<n;i++)cin>>b[i];
    ll m;cin>>m;
    ll c[m];
    for(ll i=0; i<m;i++)cin>>c[i];
    vector<ll>v;
    for(ll i=0;i<n;i++){
        if(a[i]!=b[i]){
            v.push_back(b[i]);
        }
    }
    // sort(v.begin(),v.end());
    // sort(c,c+m);
    map<ll,ll>mp;
    for(ll i=0;i<m;i++){
        mp[c[i]]++;
    }
    for(ll i=0;i<v.size();i++){
        if(mp[v[i]]==0){
            cout<<"NO"<<nl;
            return;
        }else{
            mp[v[i]]--;
        }
    }
    bool f=0;
    for(ll i=0;i<n;i++){
        if(b[i]==c[m-1])f=1;
    }
    if(f)yes;
    else no;
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