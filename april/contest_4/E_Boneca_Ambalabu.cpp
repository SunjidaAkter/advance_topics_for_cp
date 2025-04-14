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
    vector<ll>a(n);
    for(ll i=0;i<n;i++)cin>>a[i];
    vector<ll>b(30,0);
    for(ll i=0;i<n;i++){
        for(ll j=0;j<30;j++){
            if(a[i]&(1<<j))b[j]++;
        }
    }
    ll mx=0;
    for(ll i=0;i<n;i++){
        ll cur=0;
        for(ll j=0;j<30;j++){
            if(a[i]&(1<<j))cur+=(n-b[j])*(1LL<<j);
            else cur+=(b[j])*(1LL<<j);
        }
        if(cur>mx)mx=cur;
    }
    cout<<mx<<nl;
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
