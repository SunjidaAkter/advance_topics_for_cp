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
typedef pair<ll,pair<ll,ll>>pii;
void solve(){
    ll n,q;cin >> n >> q;
    vector<pii>v;
    ll a[n],b[n];
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<n;i++)cin>>b[i];
    for(int i=0;i<n;i++){
        if(a[i]+i<=q)v.push_back({b[i],{i,a[i]+i}});
    }
    sort(all(v));
    reverse(all(v));
    if(v.size()==0){
        cout<<-1<<nl;
        return;
    }
    // for(ll i=0;i<v.size();i++)cout<<v[i].first<<" "<<v[i].second.second<<" "<<v[i].second.first<<" endl"<<nl;
    cout<<v[0].second.first+1<<nl;
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