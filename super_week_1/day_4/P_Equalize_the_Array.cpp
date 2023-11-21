#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define all(X) (X).begin(), (X).end()
#define pub push_back
#define pob pop_back
#define nl  '\n'
#define c(x) cout<<x<<nl
#define yes cout<<"YES"<<nl
#define no cout<<"NO"<<nl
#define Yes cout<<"Yes"<<nl
#define No cout<<"No"<<nl
typedef pair<int,int>pii;
#define forl(ty,var,str,end) for(ty var=str; var<end; var++)
# define FAST ios_base :: sync_with_stdio (false) ; cin.tie(0) ; cout.tie(0)
void solve(){
    ll n;cin>>n;
    ll a[n],mn=INT_MAX;
    for(ll i=0;i<n;i++)cin>>a[i];
    map<ll,ll>mp;
    for(ll i=0;i<n;i++)mp[a[i]]++;
    vector<ll>v;
    for(auto it:mp)v.push_back(it.second);
    sort(all(v));
    for(ll i=0;i<v.size();i++){
        ll x=n-((v.size()-i)*v[i]);
        mn=min(mn,x);
    }
    cout<<mn<<nl;
}
int main(){
    FAST;
    int t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}