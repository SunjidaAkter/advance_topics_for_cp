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
    ll xa,ya;cin>>xa>>ya;
    ll xb,yb;cin>>xb>>yb;
    ll xf,yf;cin>>xf>>yf;
    if((xa==xb&&xb==xf)||(ya==yb&&yb==yf)){
        if(xa==xb&&xb==xf&&(min(ya,yb)<=yf&&yf<=max(ya,yb))){
            cout<<abs(ya-yb)+2<<nl;
            return;
        }
        if(ya==yb&&yb==yf&&(min(xa,xb)<=xf&&xf<=max(xb,xa))){
            cout<<abs(xa-xb)+2<<nl;
            return;
        }
    }
    cout<<abs(xa-xb)+abs(ya-yb)<<nl;
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