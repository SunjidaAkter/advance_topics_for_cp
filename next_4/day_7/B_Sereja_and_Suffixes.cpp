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
    ll n,m;cin>>n>>m;
    ll a[n],cnt=0;
    for(ll i=0;i<n;i++)cin>>a[i];
    vector<ll>v(n);
    map<ll,ll>mp;
    for(ll i=n-1;i>=0;i--){
        if(mp[a[i]]==0){
            cnt++;
            mp[a[i]]++;
            v[i]=cnt;
        }else{
            v[i]=cnt;
        }
    }
    for(ll i=0;i<m;i++){
        ll x;cin>>x;
        cout<<v[x-1]<<nl;
    }
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