#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define all(X) (X).begin(), (X).end()
#define pub push_back
#define pob pop_back
#define nl  '\n'
#define c(x) cout<<x<<nl
#define yes cout<<"YES"<<nl
#define no cout<<"NO"<<nl
#define Yes cout<<"Yes"<<nl
#define No cout<<"No"<<nl
typedef pair<int,int>pii;
#define forl(ty,var,str,end) for(ty var=str; var<end; var++)
# define FAST ios_base :: sync_with_stdio (false) ; cin.tie(0) ; cout.tie(0)
void solve(){
    ll n,mx=0;cin>>n;
    vector<vector<ll>>v;
    set<ll>st,tst;
    map<ll,ll>mp,tmp;
    map<ll,vector<ll>>ind;
    for(ll i=0;i<n;i++){
        ll k;cin>>k;
        vector<ll>temp;
        while(k--){
            ll b;cin>>b;
            temp.push_back(b);
            mp[b]++;
            st.insert(b);
            ind[b].push_back(i);
        }
        v.push_back(temp);
    }
    set<ll>::iterator it;
    for(it=st.begin();it!=st.end();it++){
        tst=st;
        tmp=mp;
        ll val=*it;
        for(ll i=0;i<ind[val].size();i++){
            for(ll j=0;j<v[ind[val][i]].size();j++){
                tmp[v[ind[val][i]][j]]--;
                if(tmp[v[ind[val][i]][j]]==0){
                    tst.erase(v[ind[val][i]][j]);
                }
            }
        }
        mx=max(mx,(ll)tst.size());
    }
    cout<<mx<<nl;
}
int main(){
    FAST;
    int t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}