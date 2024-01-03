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
    ll n,s;cin>>n>>s;
    ll a[n];
    for(ll i=0;i<n;i++)cin>>a[i];
    ll i=0,j=0,x=0,mx=0;
    for(ll j=0;j<n;j++){
        x+=a[j];
        while(x>s){
            x-=a[i];
            i++;
        }
        mx=max(mx,j-i+1);
    }
    cout<<mx;
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