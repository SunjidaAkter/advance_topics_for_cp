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
    ll n,k;cin>>n>>k;
    vector<ll>a(n);
    for(int i=0;i<n;i++)cin>>a[i];
    map<ll,ll>mp;
    for(ll i=0;i<n;i++){
        mp[a[i]]++;
    }
    if(a.size()==k){
        cout<<1<<nl;
        return;
    }
    vector<ll>v;
    for(auto x:mp){
        v.push_back(x.second);
    }
    sort(all(v));
    reverse(all(v));
    for(ll i=v.size()-1;i>=0;i--){
        if(k>=v[i]){
            k-=v[i];
            v.pop_back();
        }else break;
    }
    cout<<v.size()<<nl;
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