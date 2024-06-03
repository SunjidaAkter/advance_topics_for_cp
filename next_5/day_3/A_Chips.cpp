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
    ll n,k;cin>>n>>k;
    if(((n*(n+1))/2)>k){
        ll i=n,x=(n*(n+1))/2;
        while(x>k){
            x-=i;
            i--;
        }
        cout<<k-x<<nl;
    }else{
        ll i=1,x=(n*(n+1))/2,y=k%x;
        while(y>=i){
            y-=i;
            i++;
        }
        cout<<y<<nl;
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