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
    ll m;cin>>m;
    ll b[m];
    for(ll i=0;i<m;i++)cin>>b[i];
    ll cnt=0;
    vector<ll>v;
    for(ll i=0;i<n;i++){
        for(ll j=0;j<m;j++){
            if(b[j]%a[i]==0){
                v.push_back(b[j]/a[i]);
            }
        }
    }
    sort(all(v));
    reverse(all(v));
    for(ll val:v){
        if(val==v[0]){
            cnt++;
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