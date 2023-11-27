#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define all(X) (X).begin(), (X).end()
#define pub push_back
#define pob pop_back
#define nl  '\n'
#define c(x) cout<<x<<nl
#define yes cout<<"YES"<<nl
#define no cout<<"NO"<<nl
#define Yes cout<<"Yes"<<nl
#define No cout<<"No"<<nl
typedef pair<int,int>pii;
#define forl(ty,var,str,end) for(ty var=str; var<end; var++)
# define FAST ios_base :: sync_with_stdio (false) ; cin.tie(0) ; cout.tie(0)
ll digits_number(ll n){
    ll sz=0;
    while(n>0){
        sz++;
        n/=2;
    }
    return sz;
}
void solve(){
    ll n;cin>>n;
    ll a[n];
    for(ll i=0;i<n;i++)cin>>a[i];
    map<ll,ll>mp;
    for(ll i=0;i<n;i++){
        mp[digits_number(a[i])]++;
    }
    ll sum=0;
    for(auto it:mp){
        sum+=((it.second)*((it.second)-1))/2;
    }
    cout<<sum<<nl;
}
int main(){
    FAST;
    int t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}