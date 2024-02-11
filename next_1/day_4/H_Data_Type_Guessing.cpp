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
    double x,y,z;
    cin>>x>>y>>z;
    ll llll=(x*y)/z;
    double ans=llll,test=ans-llll;
    if(test>0){
        cout<<"double"<<nl;
        return;
    }
    if(llll>2147483647){
        cout<<"long long"<<nl;
    }else cout<<"int"<<nl;
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