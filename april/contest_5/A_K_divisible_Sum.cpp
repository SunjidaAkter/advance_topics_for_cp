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
    ll a,b;cin>>a>>b;
    if(a==1){
        cout<<b<<nl;
        return;
    }
    if(a>=b){
        if(a%b==0){
            cout<<1<<nl;
            return;
        }
        if(a%b!=0){
            cout<<2<<nl;
            return;
        }
    }
    if(a<b){
        if(b%a==0){
            cout<<b/a<<nl;
            return;
        }
        if(a%b!=0){
            cout<<(b/a)+1<<nl;
            return;
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