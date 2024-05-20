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
    if(n==k){
        cout<<1<<nl;
        return;
    }
    ll a[n];
    for(ll i=0;i<n;i++)cin>>a[i];
    ll ans=LONG_MAX,sum=0,x=0;
    for(ll i=0;i<k;i++){
        sum+=a[i];
    }
    for(ll i=0;i<n-k;i++){
        if(ans>=sum){ans=sum;x=i+1;}
        sum-=a[i];
        sum+=a[i+k];
    }
    if(ans>=sum){ans=sum;x=n-k+1;}
    // ans=min(ans,sum);
    cout<<x<<nl;
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