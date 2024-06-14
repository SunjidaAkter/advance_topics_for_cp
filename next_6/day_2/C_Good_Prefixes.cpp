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
    ll a[n];for(ll i=0; i<n;i++)cin>>a[i];
    if(n==1){
        if(a[0]==0)cout<<1<<nl;
        if(a[0]!=0)cout<<0<<nl;
        return;
    }
    ll mx[n];
    mx[0]=a[0];
    for(ll i=1; i<n;i++){
        mx[i]=max(mx[i-1],a[i]);
    }
    // for(ll val:mx)cout<<val<<" ";
    // cout<<nl;
    ll sum=0,cnt=0;
    for(ll i=0;i<n;i++){
        if(mx[i]==a[i]){
            if(a[i]==sum)cnt++;
            sum+=a[i];
        }else{
            sum-=mx[i];
            sum+=a[i];
            if(mx[i]==sum)cnt++;
            sum+=mx[i];
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