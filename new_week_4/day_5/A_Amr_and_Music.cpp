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
    ll n,k;cin >> n >> k;
    vector<pii> a(n);
    for(ll i=0;i<n;i++){
        cin >> a[i].first;
        a[i].second = i+1;
    }
    sort(all(a));
    vector<ll>v;
    ll ans=0,cnt=0;
    for(ll i=0;i<n;i++){
        if(cnt>=k)break;
        else{
            cnt+=a[i].first;
            ans++;
            v.push_back(a[i].second);
        }
    }
    if(cnt>k){ans--;v.pop_back();}
    cout<<ans<<nl;
    if(v.size()>0){
        for(ll val:v){cout<<val<<" ";}
        cout<<nl;
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