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

const ll mod=1e9+7;
void solve(){
    ll x,y,n;cin>>x>>y>>n;
    if(n%6==1){
        cout<<(((x)%mod)+mod)%mod<<nl;
    }else if(n%6==2){
        cout<<(((y)%mod)+mod)%mod<<nl;
    }else if(n%6==3){
        cout<<(((y-x)%mod)+mod)%mod<<nl;
    }else if(n%6==4){
        cout<<(((-x)%mod)+mod)%mod<<nl;
    }else if(n%6==5){
        cout<<(((-y)%mod)+mod)%mod<<nl;
    }else if(n%6==0){
        cout<<(((x-y)%mod)+mod)%mod<<nl;
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