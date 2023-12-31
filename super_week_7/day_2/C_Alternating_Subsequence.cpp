#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define all(X) (X).begin(), (X).end()
#define nl  '\n'
#define yes cout<<"YES"<<nl
#define no cout<<"NO"<<nl
#define Yes cout<<"Yes"<<nl
#define No cout<<"No"<<nl
# define FAST ios_base :: sync_with_stdio (false) ; cin.tie(0) ; cout.tie(0)
typedef pair<ll,ll>pii;
bool sign(ll n){
    return n>0;
}
void solve(){
    ll n,ans=0;cin>>n;
    ll a[n];
    for(ll i=0;i<n;i++)cin>>a[i];
    for(ll i=0;i<n;i++){
        ll j=i;
        ll mx=a[i];
        while(j<n&&sign(a[i])==sign(a[j])){mx=max(mx,a[j]);j++;}
        i=j-1;ans+=mx;
    }
    cout<<ans<<nl;
}
int main(){
    FAST;
    int t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}