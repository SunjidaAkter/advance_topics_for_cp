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
    ll a,b,c;cin>>a>>b>>c;
    if((a+b+c)%2==1)cout<<"Impossible"<<nl;
    else{
        ll x=(a+b-c)/2;
        ll y=(b+c-a)/2;
        ll z=(c+a-b)/2;
        if(x<0||y<0||z<0)cout<<"Impossible"<<nl;
        else{
            cout<<x<<" "<<y<<" "<<z<<nl;
        }
    }
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