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
    ll a[n],b[m];
    for(ll i=0;i<n;i++)cin>>a[i];
    sort(a,a+n);
    reverse(a,a+n);
    for(ll i=0;i<m;i++)cin>>b[i];
    ll j=0,ans=0;
    for(ll i=0;i<n;i++){
        if(j<m){
            if(b[j]<=b[a[i]-1]){
                ans+=b[j],j++;
            }else ans+=b[a[i]-1];
        }else ans+=b[a[i]-1];
    }
    cout<<ans<<nl;
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