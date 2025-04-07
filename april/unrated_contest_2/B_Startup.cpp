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
    vector<pii>v(k);
    for(int i=0;i<k;i++)cin>>v[i].first>>v[i].second;
    map<ll,ll>mp;
    // set<ll>st;
    for(int i=0;i<k;i++){
        mp[v[i].first]+=v[i].second;
        // st.insert(v[i].first);
    }
    if(n>=k){
        ll sum=0;
        for(int i=0;i<k;i++){
            sum+=v[i].second;
        }
        cout<<sum<<endl;
        return;
    }
    vector<ll>a;
    for(auto x:mp){
        a.push_back(x.second);
    }
    sort(a.begin(),a.end());
    reverse(a.begin(),a.end());
    ll ans=0;
    for(ll i=0;i<min(n,(ll)a.size());i++){
        ans+=a[i];
    }
    cout<<ans<<endl;
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