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
    ll n,q;cin>>n>>q;
    ll a[n],b[q];
    for(ll i=0;i<n;i++)cin>>a[i];
    sort(a,a+n);
    for(ll i=0;i<q;i++)cin>>b[i];
    for(ll i=0;i<q;i++){
        if(b[i]<a[0])cout<<b[i]<<" ";
        else cout<<a[0]-1<<" ";
    }
    cout<<nl;
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