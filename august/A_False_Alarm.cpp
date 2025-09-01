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
    ll n,m;cin>>n>>m;
    vector<ll>v(n);
    for(ll i=0;i<n;i++){
        cin>>v[i];
    }
    if(m>=n){
        yes;
        return;
    }
    ll cnt=0;
    for(ll i=n-1;i>=0;i--){
        if(v[i]==0){v.pop_back();cnt++;}
        else break;
    }
    if(cnt==n){
        yes;
        return;
    }
    for(ll i=0;i<v.size()-1;i++){
        if(v[i]==0){
            cnt++;
        }else break;
    }
    if(n-cnt>m)no;
    else yes;
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