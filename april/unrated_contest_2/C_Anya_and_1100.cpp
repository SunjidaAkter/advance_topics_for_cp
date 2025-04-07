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
    string s;cin>>s;
    ll n=s.size();
    set<ll>st;
    auto up=[&](ll i){
        if(i>=0&&i<=n-4){
            if(s.substr(i,4)=="1100")st.insert(i);
            else st.erase(i);
        }
    };
    ll q;cin>>q;
    for(ll i=0;i<n-3;i++){
        up(i);
    }
    while(q--){
        ll x;cin>>x;x--;
        char c;cin>>c;
        s[x]=c;
        for(ll i=x-3;i<=x;i++){
            up(i);
        }
        if(st.size()>0)yes;
        else no;
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