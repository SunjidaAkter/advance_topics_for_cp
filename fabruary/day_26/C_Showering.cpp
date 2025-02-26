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
    ll n,k,s,j=0;cin>>n>>k>>s;
    vector<ll>a;
    for(ll i=0;i<n;i++){
        ll x,y;cin>>x>>y;
        a.push_back(x-j);
        j=y;
    }
    a.push_back(s-j);
    sort(all(a));
    if(a[a.size()-1]>=k)yes;
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