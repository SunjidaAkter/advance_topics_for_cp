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
    set<ll>st;
    for(ll i=0;i<m;i++){
        ll x,y;cin>>x>>y;
        st.insert(x);
        st.insert(y);
    }
    vector<ll>v;
    while(st.size()>0){
        v.push_back(*st.begin());
        st.erase(*st.begin());
    }
    ll x=0;
    for(ll i=1;i<=v.size();i++){
        if(i!=v[i-1]){
            x=i;
            break;
        }
    }
    if(x==0)x=n;
    cout<<n-1<<nl;
    for(ll i=1;i<=n;i++){
        if(x==i)continue;
        cout<<x<<" "<<i<<nl; 
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