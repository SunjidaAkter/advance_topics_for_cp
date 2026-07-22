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
    vector<ll>a(n);
    vector<ll>b(n-1);
    for(ll i=0;i<n;i++)cin>>a[i];
    for(ll i=0;i<n-1;i++)cin>>b[i];
    ll cnt1=0,cnt2=0;
    ll pre1=0;
    ll pre2=1;
    if(a[0]==pre1)cnt2++;
    if(a[0]==pre2)cnt1++;
    for(ll i=1;i<n;i++){
        if((pre1+a[i])%m!=b[i-1]){
            cnt1++;
            pre1=1-a[i];
        }else pre1=a[i];
        if((pre2+a[i])%m!=b[i-1]){
            cnt2++;
            pre2=1-a[i];
        }else pre2=a[i];
    }
    cout<<min(cnt1,cnt2)<<nl;
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