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
    vector<ll>a;
    for(ll i=1;i<=n;i++)a.push_back(i);
    vector<pii>v;
    for(ll i=0;i<n-1;i++){
        ll b1=a.back();
        a.pop_back();
        ll b2=a.back();
        a.pop_back();
        a.push_back((b1+b2+1)/2);
        v.push_back({b1,b2});
    }
    cout<<2<<nl;
    // reverse(all(v));
    for(ll i=0;i<v.size();i++){
        cout<<v[i].first<<" "<<v[i].second<<nl;
    }
    // cout<<a[0]<<" "<<a[1]<<nl;
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