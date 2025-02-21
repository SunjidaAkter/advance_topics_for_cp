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
    ll n,a,b;cin>>n>>b>>a;
    vector<ll>v;
    for(ll i=n;i>=a;i--)v.push_back(i);
    for(ll i=b+1;i<=a-1;i++)v.push_back(i);
    for(ll i=1;i<=b;i++)v.push_back(i);
    for(ll i=0;i<v.size();i++)cout<<v[i]<<" ";
    cout<<nl;
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