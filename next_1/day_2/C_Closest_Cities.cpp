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
    ll a[n];
    for(ll i=0;i<n;i++)cin>>a[i];
    vector<ll>l(n),r(n);
    l[0]=0,r[0]=0;
    for(ll i=1;i<n;i++){
        if(i==n-1||a[i]-a[i-1]<a[i+1]-a[i]){
            l[i]=l[i-1]+1;
        }else{
            l[i]=l[i-1]+a[i]-a[i-1];
        }
    }
    for(ll i=n-2;i>=0;i--){
        if(i==0||a[i+1]-a[i]<a[i]-a[i-1]){
            r[i]=r[i+1]+1;
        }else{
            r[i]=r[i+1]+a[i+1]-a[i];
        }
    }
    ll q;cin>>q;
    while(q--){
        ll x,y;cin>>x>>y;x--,y--;
        if(x<y)cout<<r[x]-r[y]<<nl;
        else cout<<l[x]-l[y]<<nl;
    }
    // for(ll val:l)cout<<val<<" ";
    // cout<<nl;
    // for(ll val:r)cout<<val<<" ";
    // cout<<nl;
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