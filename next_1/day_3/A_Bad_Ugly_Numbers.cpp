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
    ll n;cin>>n;
    if(n==1)cout<<-1<<nl;
    else if(n==2)cout<<23<<nl;
    else if((n-1)%3==0){
        for(ll i=1;i<=n/2;i++)cout<<3;
        cout<<2;
        for(ll i=(n/2)+1;i<=n-1;i++)cout<<3;
        cout<<nl;
    }else{
        for(ll i=1;i<=n-1;i++)cout<<2;
        cout<<3<<nl;
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