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
    ll n,m;cin>>n>>m;
    vector<ll>a(n);
    for(ll i=0;i<n;i++)cin>>a[i];
    vector<bool>pos(n,false);
    for(ll i=0;i<m;i++){
        ll x;cin>>x;
        pos[x-1]=true;
    }
    for(ll i=0;i<n-1;i++){
        if(!pos[i]){
            ll left=*max_element(a.begin(),a.begin()+i+1);
            ll right=*min_element(a.begin()+i+1,a.end());
            if(left>right){
                no;
                return;
            }
        }
    }
    yes;
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