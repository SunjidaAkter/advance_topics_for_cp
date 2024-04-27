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
    ll n,x;cin>>n>>x;
    ll a[n];
    for(ll i=0;i<n;i++){
        cin>>a[i];
    }
    ll sum=0,mx=a[0],mn=a[0];
    for(ll i=0;i<n;i++){
        mx=max(mx,a[i]);
        mn=min(mn,a[i]);
        if(mx-x>mn+x){
            sum++;
            mx=a[i];
            mn=a[i];
        }
    }
    cout<<sum<<nl;
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