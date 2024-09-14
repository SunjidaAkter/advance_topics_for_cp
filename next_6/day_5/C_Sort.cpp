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
// 112
void solve(){
    ll n,q;cin>>n>>q;
    vector<vector<ll>> a(n+1,vector<ll>(26,0));
    string x,y;cin>>x>>y;
    for(ll i=0;i<n;i++){
        a[i+1]=a[i];
        a[i+1][x[i]-'a']++;
        a[i+1][y[i]-'a']--;
    }
    for(ll i=0;i<q;i++){
        ll l,r;cin>>l>>r;
        ll ans=0;l--;
        for(ll ch=0;ch<26;ch++){
            ans+=max(a[r][ch]-a[l][ch],(ll)0);
        }
        cout<<ans<<nl;
    }
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