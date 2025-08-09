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
    vector<ll>v;
    // cout<<"n";
    for(ll i=0;i<n;i++){
        ll x;cin>>x;
        if(x==-1)continue;
        v.push_back(x);
    }
    if(v.empty()){
        yes;
        return;
    }
    if(v.size()==1&&v[0]==0){
        no;
        return;
    }
    for(ll i=0;i<v.size()-1;i++){
        if(v[i]==0||v[i]!=v[i+1]){
            no;return;
        }
    }
    yes;
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