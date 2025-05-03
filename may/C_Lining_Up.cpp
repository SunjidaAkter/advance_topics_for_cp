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
    ll n;cin>>n;
    vector<ll>a(n,0);
    // vector<ll>a(n);
    for(ll i=0;i<n;i++){
        ll tmp;cin>>tmp;
        if(tmp>=n||(n%2==0&&tmp%2==0)||(n%2==1&&tmp%2==1)){
            cout<<0<<nl;
            return;
        }else{
            a[tmp]++;
        }
    }
    if(n%2==0){
        for(ll i=1;i<n;i+=2){
            if(a[i]!=2){
                cout<<0<<nl;
                return;
            }
        }
    }else{
        if(a[0]!=1){
            cout<<0<<nl;
            return;
        }
        for(ll i=2;i<n;i+=2){
            if(a[i]!=2){
                cout<<0<<nl;
                return;
            }
        }
    }
    ll ans=1;
    for(ll i=0;i<n/2;i++){
        ans=(ans*2)%mod;
    }
    cout<<ans;
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