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
    ll v[n];
    for(ll i=0;i<n;i++)cin>>v[i];
    vector<ll>a;
    vector<ll>b;
    sort(v,v+n);
    if(v[0]==v[n-1]){
        cout<<-1<<nl;
        return;
    }
    for(ll i=0;i<n;i++){
        if(v[i]==v[0])a.push_back(v[i]);
        else b.push_back(v[i]);
    }
    cout<<a.size()<<" "<<b.size()<<nl;
    for(ll val:a)cout<<val<<" ";
    cout<<nl;
    for(ll val:b)cout<<val<<" ";
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