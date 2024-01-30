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
    ll n,m;
    cin>>n;
    vector<ll>a(n);
    for(ll i=0;i<n;i++)cin>>a[i];
    cin>>m;
    vector<ll>b(m);
    for(ll i=0;i<m;i++)cin>>b[i];
    vector<ll>pa(n),pb(m);
    pa[0]=a[0],pb[0]=b[0];
    ll mxa=0,mxb=0;
    mxa=max(mxa,pa[0]),mxb=max(mxb,pb[0]);
    for(ll i=1;i<n;i++){
        pa[i]=a[i]+pa[i-1];
        mxa=max(mxa,pa[i]);
    }
    for(ll i=1;i<m;i++){
        pb[i]=b[i]+pb[i-1];
        mxb=max(mxb,pb[i]);
    }
    cout<<(mxa+mxb)<<nl;
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