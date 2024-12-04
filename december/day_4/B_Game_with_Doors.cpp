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
    ll a,b;cin>>a>>b;
    ll x,y;cin>>x>>y;
    if(b<x||y<a){
        // cout<<"j";
        cout<<1<<nl;
        return;
    }
    if(a<x&&b<y){
        cout<<b-x+2<<nl;
        return;
    }
    if(x<a&&y<b){
        cout<<y-a+2<<nl;
        return;
    }
    if(a==x&&b==y){
        // cout<<"k";
        cout<<b-a<<nl;
        return;
    }
    if(b==x||y==a){
        cout<<2<<nl;
        return;
    }
    if(b<x){
        // cout<<"j";
        cout<<1<<nl;
        return;
    }
    if(a<x&&y<b){
        // cout<<"l";
        cout<<(y-x)+2<<nl;
        return;
    }
    if(x<a&&b<y){
        // cout<<"m";
        cout<<(b-a)+2<<nl;
        return;
    }
    if((x<=a&&b<y)||(x<a&&b<=y)){
        // cout<<"n";
        cout<<(b-a)+1<<nl;
        return;
    }
    if((a<=x&&y<b)||(a<x&&y<=b)){
        // cout<<"n";
        cout<<(y-x)+1<<nl;
        return;
    }
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