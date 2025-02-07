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
    string s;cin>>s;
    vector<ll>v(26,0);
    vector<ll>tr;
    for(ll i=0;i<m;i++){
        ll x;cin>>x;
        tr.push_back(x);
    }
    tr.push_back(n);
    sort(all(tr));
    for(ll i=0;i<n;i++){
        ll cnt=tr.end()-upper_bound(tr.begin(),tr.end(),i);
        v[s[i]-'a']+=cnt;
    }
    for(int i=0;i<26;i++){
        cout<<v[i]<<" ";
    }
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