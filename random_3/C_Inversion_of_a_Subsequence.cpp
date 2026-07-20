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
    vector<ll>b(n);
    for(ll i=0;i<n;i++)cin>>b[i];
    ll cnt0=0,cnt1=0,sum=0,cnt=0;
    for(ll i=0;i<n;i++)if(a[i]==0)cnt0++;
    for(ll i=0;i<n;i++)if(b[i]==1)cnt1++;
    for(ll i=0;i<n;i++){
        if(a[i]!=b[i]){
            if(a[i]==1)sum++;
            cnt++;
        }
    }
    if(cnt==0)cout<<0<<nl;
    else if(cnt0==n||cnt1==n){cout<<-1<<nl;return;}
    else if(sum%2==0)cout<<2<<nl;
    else cout<<1<<nl;
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