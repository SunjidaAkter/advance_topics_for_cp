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
    map<ll,ll>mp;
    set<pii>st;
    ll mx=0,mx_cnt=0,pick=0;
    for(ll i=0;i<n;i++){
        ll x;cin>>x;
        if(x==1){
            ll y;cin>>y;
            if(mp[y]>0) {
                st.erase({mp[y], -y});
            }
            mp[y]++;
            st.insert({mp[y], -y});
        }else{
            if(st.size()==0) {
                cout << "empty"<<nl;
            } else {
                auto it=*st.begin();
                ll mn_cnt = it.first;
                ll cnt = -it.second;
                cout << cnt << nl;
                st.erase(it);
                ll z = mn_cnt / 2;
                mp[cnt] -= z;        
                if (mp[cnt] > 0) {
                    st.insert({mp[cnt], -cnt});
                } else {
                    mp.erase(cnt);
                }
            }
        
        }
    }
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=1;
    // cin>>t;
    while(t--){
        solve();
    }
    return 0;
}







