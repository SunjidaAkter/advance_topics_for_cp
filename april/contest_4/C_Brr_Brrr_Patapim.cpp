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
    vector<vector<ll>>v(n);
    for(ll i=0;i<n;i++){
        vector<ll>a;
        for(ll j=0;j<n;j++){
            ll x;cin>>x;
            a.push_back(x);
        }
        v[i]=a;
    }
    vector<ll>ans(2*n-1);
    for(ll i=0;i<n;i++){
        for(ll j=0;j<n;j++){
            ans[i+j]=v[i][j];
        }
        // cout<<nl;
    }
    ll k=-1;
    vector<ll>sum=ans;
    sort(all(sum));
    for(ll i=1;i<=2*n;i++){
        if(sum[i-1]!=i){
            k=i;break;
        }
    }
    if(k==-1)k=2*n;
    // vector<ll>vv;
    cout<<k<<" ";
    for(ll i=0;i<ans.size();i++)cout<<ans[i]<<" ";
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