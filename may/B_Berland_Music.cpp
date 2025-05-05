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
    vector<ll>a(n);
    for(ll i=0;i<n;i++)cin>>a[i];
    string s;cin>>s;
    vector<ll>v(n);
    vector<pii>one;
    vector<pii>zer;
    ll x=0;
    for(ll i=0;i<n;i++){
        if(s[i]=='0'){
            zer.push_back({a[i],i});
            x++;
        }else{
            one.push_back({a[i],i});
        }
    }
    sort(all(one));
    sort(all(zer));
    if(x==n){
        for(ll i=0;i<n;i++)cout<<a[i]<<" ";
        cout<<nl;
        return;
    }
    for(ll i=0;i<one.size();i++){
        v[one[i].second]=++x;
    }
    x=0;
    for(ll i=0;i<zer.size();i++){
        v[zer[i].second]=++x;
    }
    for(ll i=0;i<n;i++)cout<<v[i]<<" ";
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