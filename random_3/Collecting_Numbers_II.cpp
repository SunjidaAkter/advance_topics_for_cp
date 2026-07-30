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
    ll n,q;cin>>n>>q;
    vector<ll>v(n);
    for(ll i=0;i<n;i++)cin>>v[i];
    vector<ll>pos(n+2);
    pos[0]=0;
    pos[n+1]=n+1;
    for(ll i=1;i<=n;i++){
        pos[v[i-1]]=i;
    }
    ll ans=1;
    for(ll i=1;i<=n;i++){
        if(pos[i-1]>pos[i])ans++;
    }
    while(q--){
        ll x,y;cin>>x>>y;
        set<pii>st;
        st.insert({v[x-1]-1,v[x-1]});
        st.insert({v[x-1],v[x-1]+1});
        st.insert({v[y-1]-1,v[y-1]});
        st.insert({v[y-1],v[y-1]+1});
        for(auto p:st){
            ll a=p.first;
            ll b=p.second;
            if(pos[a]>pos[b])ans--;
        }
        swap(pos[v[x-1]],pos[v[y-1]]);
        swap(v[x-1],v[y-1]);
        for(auto p:st){
            ll a=p.first;
            ll b=p.second;
            if(pos[a]>pos[b])ans++;
        }
        cout<<ans<<nl;
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