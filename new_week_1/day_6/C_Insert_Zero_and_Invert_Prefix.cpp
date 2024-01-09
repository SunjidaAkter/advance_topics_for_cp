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
    if(a[n-1]==1){
        no;return;
    }
    bool f=0;
    vector<ll>ans;
    ll z=0,o=0,s=0;
    for(ll i=n-1;i>=0;i--){
        if(a[i]==1){
            f=1;
            o++;
            s++;
        }
        if(a[i]==0&&f){
            f=0;
            // cout<<s<<" "<<o<<"nl"<<nl;
            for(ll j=0;j<s-1;j++)ans.push_back(0);
            ans.push_back(o);
            s=0;
            o=0;
        }
        if(a[i]==0){
            // z++;
            s++;
        }
    }
    if(f){
        for(ll j=0;j<s-1;j++)ans.push_back(0);
        ans.push_back(o);
    }
    yes;
    for(ll val:ans)cout<<val<<" ";
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