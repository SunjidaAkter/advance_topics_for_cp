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
    vector<ll>a(4);
    for(ll i=0;i<4;i++)cin>>a[i];
    vector<ll>v=a;
    sort(all(a));
    ll x=max(v[2],v[3]),y=max(v[0],v[1]);
    if(x>y)swap(x,y);
    // cout<<x<<" "<<y<<nl;
    if((x==a[2])&&(y==a[3]))yes;
    else no;
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