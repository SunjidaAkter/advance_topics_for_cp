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
    ll x,y,z;cin>>x>>y>>z;
    if(y%3==0){
        if((y+z)%3==0)cout<<x+(y+z)/3<<nl;
        else cout<<x+1+(y+z)/3<<nl;
    }else if(3-(y%3)<=z){
        if((y+z)%3==0)cout<<x+(y+z)/3<<nl;
        else cout<<x+1+(y+z)/3<<nl;
    }else cout<<-1<<nl;
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