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
    vector<string>a(n);
    for(ll i=0;i<n;i++)cin>>a[i];
    vector<ll>v(n);
    for(ll x=0;x<n;x++){
        ll cnt=0;
        for(ll y=0;y<n;y++){
            if(y<x&&a[x][y]=='1')cnt++;
            else if(x<y&&a[x][y]=='0')cnt++;
        }
        v[cnt]=x+1;
    }
    for(ll i=0;i<n;i++)cout<<v[i]<<" ";
    cout<<nl;
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