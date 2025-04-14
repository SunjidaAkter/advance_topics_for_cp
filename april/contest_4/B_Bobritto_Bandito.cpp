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
    ll n,k,x,y;cin>>n>>k>>x>>y;
    ll m=n-k;
    if(x==0){
        y-=(m);
    }else if(y==0){
        x+=(m);
    }else{
        if(abs(x)>=m)x+=m;
        else if(abs(x)<m){
            m-=abs(x);
            x=0;
            y-=m;
        }
    }
    cout<<x<<" "<<y<<nl;
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