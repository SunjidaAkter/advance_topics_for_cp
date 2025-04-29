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
    vector<ll>v(n);
    for(ll i=0;i<n;i++)cin>>v[i];
    sort(all(v));
    ll mn=LONG_MAX,k;
    for(ll i=1;i<n;i++){
        if(mn>=v[i]-v[i-1]){
            mn=v[i]-v[i-1];
            k=i-1;
        }
    }
    cout<<v[k]<<" ";
    for(ll i=k+2;i<n;i++)cout<<v[i]<<" ";
    for(ll i=0;i<k;i++)cout<<v[i]<<" ";
    cout<<v[k+1]<<nl;
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