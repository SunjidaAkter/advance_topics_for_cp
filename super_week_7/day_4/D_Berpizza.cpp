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
const ll N=1e9;
void solve(){
    ll cnt=0;
    map<ll,ll>c;
    set<ll>st;
    set<pii>sp;
    ll q;cin>>q;
    while(q--){
        ll t;cin>>t;
        if(t==1){
            ll m;cin>>m;
            cnt++;
            st.insert(cnt);
            sp.insert({m,N-cnt});
            c[cnt]=m;
        }
        if(t==2){
            ll val=*st.begin();
            cout<<val<<" ";
            st.erase(val);
            sp.erase({c[val],N-val});
            c.erase(val);
        }
        if(t==3){
            pii val=*sp.rbegin();
            cout<<N-val.second<<" ";
            st.erase(N-val.second);
            sp.erase(val);
            c.erase(N-val.second);
        }
    }
        cout<<nl;
}
int main(){
    FAST;
    int test=1;
    // cin>>t;
    while(test--){
        solve();
    }
    return 0;
}