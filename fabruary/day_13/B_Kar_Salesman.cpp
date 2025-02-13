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
    for(auto &x:a)cin>>x;
    ll left=*max_element(a.begin(),a.end()),right=1e15;
    ll sum=accumulate(a.begin(),a.end(),0ll);ll ans=1e15;
    auto ok=[&](ll x){
        return ((sum+x-1)/x)<=k;
    };
    while(left<=right){
        ll mid=(left+right)/2;
        if(ok(mid))ans=mid,right=mid-1;
        else left=mid+1;
    }
    cout<< ans<<nl;
    return;
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