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
    ll a[n][m];
    for(ll i=0;i<n;i++){
        for(ll j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    vector<pii>v;
    ll ok=1;
    for(ll i=0;i<n;i++){
        set<ll>st;
        for(ll j=0;j<m;j++){
            st.insert(a[i][j]%n);
        }
        if(st.size()>1){ok=0;break;}
        else v.push_back({*st.begin(),i+1});
    }
    if(!ok){
        cout<<-1<<nl;
        return;
    }
    sort(all(v));
    for(ll i=0;i<v.size();i++){
        cout<<v[i].second<<" ";
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