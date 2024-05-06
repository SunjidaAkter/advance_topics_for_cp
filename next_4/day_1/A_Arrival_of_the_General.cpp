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
    vector<ll>a(n);
    for(ll i=0; i<n;i++) cin>>a[i];
    ll mx=0,mxPos=0,mn=LONG_MAX,mnPos=n-1;
    for(ll i=0; i<n;i++){
        if(mx<a[i]){
            mx=a[i];
            mxPos=i+1;
        }
        if(mn>=a[i]){
            mn=a[i];
            mnPos=i+1;
        }
    }
    if(mxPos>mnPos)cout<<mxPos-1+n-mnPos-1<<endl;
    else cout<<mxPos-1+n-mnPos<<endl;
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