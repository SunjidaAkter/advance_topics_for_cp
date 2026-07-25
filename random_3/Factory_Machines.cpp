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
bool check(vector<ll>&v,ll m,ll mid){
    ll cnt=0;
    for(ll i=0;i<v.size();i++){
        ll tmp=mid/v[i];
        cnt+=tmp;
        if(cnt>=m)return true;
    }
    return cnt>=m;
}
void solve(){
    ll n,m;cin>>n>>m;
    vector<ll>v(n);
    for(ll i=0;i<n;i++)cin>>v[i];
    ll l=0,r=1e18,ans=0;
    while(l<=r){
        ll mid=l+(r-l)/2;
        if(check(v,m,mid)){
            ans=mid;
            r=mid-1;
        }else l=mid+1;
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