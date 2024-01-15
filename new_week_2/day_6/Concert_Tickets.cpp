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
    multiset<ll>st;
    for(ll i=0;i<n;i++){
        ll x;cin>>x;
        st.insert(x);
    }
    for(ll i=0;i<m;i++){
        ll x;cin>>x;
        auto it=st.lower_bound(x);
        if((*it)==x){
            cout<<(*it)<<nl;
            st.erase(it);
        }else{
            if(it==st.begin()){
                cout<<-1<<nl;
            }else{
                it--;
                cout<<(*it)<<nl;
                st.erase(it);
            }
        }
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