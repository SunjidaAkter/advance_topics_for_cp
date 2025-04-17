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
    vector<vector<ll>>v(n);
    for(ll i=0;i<n;i++){
        vector<ll>a;
        for(ll j=0;j<m;j++){
            ll x;cin>>x;
            a.push_back(x);
        }
        v[i]=a;
    }
    vector<pair<ll,vector<ll>>>vv;
    for(ll i=0;i<n;i++){
        ll cnt=0;
        for(ll j=0;j<m;j++){
            cnt+=v[i][j];
        }
        vv.push_back({cnt,v[i]});
    }
    sort(all(vv));
    reverse(all(vv));
    vector<ll>k;
    for(ll i=0;i<vv.size();i++){
        for(ll j=0;j<m;j++){
            k.push_back(vv[i].second[j]);
        }
    }
    vector<ll>pre(k.size()+1);
    pre[0]=0;
    for(ll i=0;i<k.size();i++){
        pre[i+1]=pre[i]+k[i];
    }
    ll sum=0;
    for(ll i=0;i<pre.size();i++)sum+=pre[i];
    cout<<sum<<nl;
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