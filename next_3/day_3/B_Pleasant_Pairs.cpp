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
    ll n;cin>>n;
    ll a[n+1],cnt=0;
    for(ll i=1;i<=n;i++)cin>>a[i];
    for(ll i=1;i<=n;i++){
        for(ll j=(a[i]-i);j<=n;j+=a[i]){
            if(j>0&&a[i]*a[j]==i+j&&i<j)cnt++;
        }
    }
    cout<<cnt<<nl;
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