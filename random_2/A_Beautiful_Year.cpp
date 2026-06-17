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
    set<ll>st;
    n++;
    ll x=n;
    for(ll i=0;i<4;i++){
        st.insert(x%10);
        x/=10;
    }
    // cout<<st.size()<<nl;
    while(st.size()<4){
        st.clear();
        n++;
        x=n;
        for(ll i=0;i<4;i++){
            st.insert(x%10);
            x/=10;
        }
    }
    cout<<n<<nl;
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