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
    if(n==3){
        cout<<1<<" "<<1<<" "<<2<<" "<<1<<" "<<2<<" "<<3<<" "<<1<<" "<<3<<" "<<2<<" "<<2<<" "<<3<<" "<<3<<nl;
    }else{
        if(n%2){
            cout<<1<<" "<<1<<" "<<2<<" "<<1<<" "<<2<<" "<<3<<" "<<1<<" "<<3<<" "<<2<<" "<<2<<" "<<3<<" "<<3<<" ";
            for(ll i=4;i<=n;i+=2){
                cout<<i<<" "<<i+1<<" "<<i<<" "<<i<<" "<<i+1<<" "<<i+1<<" "<<i<<" "<<i+1<<" ";
            }
            cout<<nl;
        }else{
            for(ll i=1;i<=n;i+=2){
                cout<<i<<" "<<i+1<<" "<<i<<" "<<i<<" "<<i+1<<" "<<i+1<<" "<<i<<" "<<i+1<<" ";
            }
            cout<<nl;
        }
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