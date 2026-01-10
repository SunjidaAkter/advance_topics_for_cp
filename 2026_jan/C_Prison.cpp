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
    ll n, m;cin>>n>>m;
    vector<ll>v1(m);
    vector<ll>v2(m);
    for(ll i=0;i<m;i++){
        cin>>v1[i]>>v2[i];
    }
    sort(all(v1));
    sort(all(v2));
    reverse(all(v1));
    if(v1[0]>v2[0])cout<<0<<nl;
    else {
        cout<<v2[0]-v1[0]+1<<nl;
    }
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