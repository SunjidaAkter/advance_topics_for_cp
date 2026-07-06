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
    ll x,y,l,r,a,b;cin>>x>>y>>l>>r>>a>>b;
    ll sum=0;
    // if(a<x){
    //     sum+=(l-a)*y;
    // }
    // if(b>r){
    //     sum+=(b-r)*y;
    // }
    if(l<=a && a<=r && l<=b && b<=r){
        sum+=abs(a-b)*x;
    }
    else if(a<l && r<b){
        sum+=(l-a)*y;
        sum+=(b-r)*y;
        sum+=(r-l)*x;
    }
    else if(a<l && l<=b && b<=r){
        sum+=(l-a)*y;
        sum+=(b-l)*x;
    }
    else if(l<=a && a<=r && r<b){
        sum+=(b-r)*y;
        sum+=(r-a)*x;
    }else if(a<l && b<l){
        sum+=abs(a-b)*y;
    }
    else if(a>r && b>r){
        sum+=abs(a-b)*y;
    }
    cout<<sum<<nl;
}
int main(){
    FAST;
    int t=1;
    // cin>>t;
    while(t--){
        solve();
    }
    return 0;
}