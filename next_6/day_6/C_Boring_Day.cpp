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
const ll N=1e5+20;
ll dp[N];
void solve(){
    ll n,l,r;cin>>n>>l>>r;
    ll a[n];
    for(ll i=0;i<n;i++){
        cin>>a[i],dp[i+1]=0;
    }
    ll sum=0,cur=0;
    for(ll i=0;i<n;i++){
        sum+=a[i];
        while(sum-a[cur]>=l)sum-=a[cur++];
        dp[i+1]=max(dp[i],dp[cur]+(l<=sum&&sum<=r));
    }
    cout<<dp[n]<<nl;
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