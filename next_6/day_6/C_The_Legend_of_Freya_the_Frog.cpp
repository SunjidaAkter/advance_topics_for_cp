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
    ll a,b,k;
    cin>>a>>b>>k;
    ll x=(a+k-1)/k;
    ll y=(b+k-1)/k;
    if(x>y){
        cout<<2*(max(x,y))-1<<nl;
    }else{
        cout<<2*(max(x,y))<<nl;
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