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
    vector<ll>v(n);
    for(ll i=0;i<n;i++)cin>>v[i];
    ll mx=*max_element(all(v));
    ll mn=*min_element(all(v));
    ll x,y;
    for(ll i=0;i<n;i++){
        if(v[i]==mx)x=i;
        if(v[i]==mn)y=i;
    }
    // cout<<x<<" "<<y<<nl;
    ll mnn=min(max(x,y)-0+1,(n-1)-min(x,y)+1);
    ll mxx=(min(x,y)-0+1)+((n-1)-max(x,y)+1);
    cout<<min(mxx,mnn)<<nl;
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