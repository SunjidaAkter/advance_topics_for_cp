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
    ll n,sum=0;cin>>n;
    vector<ll>a(n);
    for(auto &x:a)cin>>x;
    map<tuple<ll,ll,ll>,ll>mp;
    for(int i=0;i<n-2;i++){
        sum+=(mp[{-1,a[i+1],a[i+2]}]+mp[{a[i],-1,a[i+2]}]+mp[{a[i],a[i+1],-1}]-3*mp[{a[i],a[i+1],a[i+2]}]);
        mp[{-1,a[i+1],a[i+2]}]++;
        mp[{a[i],-1,a[i+2]}]++;
        mp[{a[i],a[i+1],-1}]++;
        mp[{a[i],a[i+1],a[i+2]}]++;
    }
    cout<<sum<<nl;
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