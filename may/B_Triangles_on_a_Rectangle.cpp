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
    ll w,h;cin>>w>>h;
    ll n1;cin>>n1;
    vector<ll>v1(n1);
    for(ll i=0;i<n1;i++)cin>>v1[i];
    ll x1=v1.back()-v1[0];
    ll n2;cin>>n2;
    vector<ll>v2(n2);
    for(ll i=0;i<n2;i++)cin>>v2[i];
    ll x2=v2.back()-v2[0];
    ll y1=h*max(x1,x2);
    ll n3;cin>>n3;
    vector<ll>v3(n3);
    for(ll i=0;i<n3;i++)cin>>v3[i];
    ll x3=v3.back()-v3[0];
    ll n4;cin>>n4;
    vector<ll>v4(n4);
    for(ll i=0;i<n4;i++)cin>>v4[i];
    ll x4=v4.back()-v4[0];
    ll y2=w*max(x3,x4);
    cout<<max(y1,y2)<<nl;
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