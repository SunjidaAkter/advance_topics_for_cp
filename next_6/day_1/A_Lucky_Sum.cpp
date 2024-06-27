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
set<ll>st;
const ll N=1e5;ll l,r,s;
void luck(ll x){
    st.insert(x);
    // cout<<r<<" ";
    if(x<r)luck(x*10+4),luck(x*10+7);
} 
void solve(){
    // l,r=7777;
    s=0;
    cin>>l>>r;
    luck(0);
    while (l<=r){
        ll it=*st.lower_bound(l);
        s+=(min(it,r)-l+1)*it;
        l=it+1;
    }
    cout<<s<<nl;
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