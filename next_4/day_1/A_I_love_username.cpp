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
    for(ll i=0; i<n; i++)cin>>a[i];
    ll mx=a[0],mn=a[0],cnt=0;
    for(ll i=1;i<n;i++){
        if(mx<a[i]||mn>a[i]){
            if(mx<a[i]){
                mx=a[i];
                cnt++;
            }else if(mn>a[i]){
                mn=a[i];
                cnt++;
            }
        }
    }
    cout<<cnt<<nl;
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