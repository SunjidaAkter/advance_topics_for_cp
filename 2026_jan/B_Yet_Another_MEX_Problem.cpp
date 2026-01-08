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
    vector<ll>a(n);
    for(ll i=0;i<n;i++)cin>>a[i];
    sort(all(a));
    ll mex=0;
    for(ll i=0;i<n;i++){
        if(a[i]==mex){
            mex++;
        }
    }
    // cout<<mex<<nl;
    map<ll,ll>mp;
    for(ll i=0;i<n;i++){
        mp[a[i]]++;
    }
    ll cnt=0;
    vector<ll>v;
    for(auto x:mp){
        if(x.second>=1){
            cnt+=x.second-1;
            v.push_back(x.first);
        }
    }
    if(cnt>=n-k+1){
        cout<<mex<<nl;
    }else{
        ll nd=n-k+1-cnt;
        for(ll i=0;i<nd;i++){
            v.pop_back();
        }
        sort(all(v));
        ll nm=0;
        for(ll i=0;i<v.size();i++){
            if(v[i]==nm){
                nm++;
            }
        }
        cout<<nm<<nl;
    }
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