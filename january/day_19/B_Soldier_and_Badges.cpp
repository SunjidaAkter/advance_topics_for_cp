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
    for(ll i=0;i<n;i++) cin>>a[i];
    sort(a,a+n);
    // for(ll i=0;i<n;i++) cout<<a[i]<<" ";
    // cout<<nl;
    ll sum=0;
    for(ll i=0;i<n;i++){
        for(ll j=0;j<i;j++){
            if(i!=j && a[i]==a[j]){
                sum++;
                a[i]++;
            }
        }
    }
    cout<<sum<<nl;
    // for(ll i=0;i<n;i++) cout<<a[i]<<" ";
    // cout<<nl;
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