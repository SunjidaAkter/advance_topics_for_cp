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
    ll n,sum=0;cin>>n;
    if(n==0){
        cout<<1<<nl;
    }else if(n==1){
        cout<<2<<nl;
    }else if(n>=2&&n<15){
        cout<<3<<nl;
    }else{
        if(n%15==0){
            cout<<(n/15)+((n/15)*2+1)<<nl;
        }else if((n-1)%15==0){
            cout<<(n/15)+((n/15)*2+1)+1<<nl;
        }else{
            cout<<(n/15)+((n/15)*2+1)+2<<nl;
         }
    }
    // for(ll i=0;i<=n;i++){
    //     if(i%3==i%5)sum++;
    // }
    // cout<<sum<<nl;
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