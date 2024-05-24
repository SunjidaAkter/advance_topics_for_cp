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
    if(n==m){
        for(ll i=0;i<n;i++){
            cout<<"GB";
        }
        return;
    }
    if(n>m){
        for(ll i=0;i<m;i++){
            cout<<"BG";
        }
        for(ll i=0;i<n-m;i++){
            cout<<"B";
        }
        return;
    }
    if(n<m){
        for(ll i=0;i<n;i++){
            cout<<"GB";
        }
        for(ll i=0;i<m-n;i++){
            cout<<"G";
        }
        return;
    }
}
int main(){
    FAST;
    #ifdef ONLINE_JUDGE 
    freopen("input.txt", "r", stdin);  
    freopen("error.txt", "w", stderr); 
    freopen("output.txt", "w", stdout); 
    #endif
    int t=1;
    // cin>>t;
    while(t--){
        solve();
    }
    return 0;
}