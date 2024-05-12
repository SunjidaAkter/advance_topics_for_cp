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
const ll N=1e6;
void solve(){
    ll n;cin>>n;
    ll a[n];
    vector<vector<ll>>v(N);
    vector<pii>ans;
    map<ll,ll>mp;
    for(ll i=0; i<n;i++){
        cin>>a[i];
        v[a[i]].push_back(i);
        mp[a[i]]++;
    }
    set<ll>st;
    for(ll i=0; i<n;i++){
        st.insert(a[i]);
    }
    vector<ll>aa;
    while(!st.empty()){
        aa.push_back(*st.begin());
        st.erase(st.begin());
    }
    sort(all(aa));
    for(ll i=0; i<aa.size();i++){
        if(mp[aa[i]]==1){
            ans.push_back({aa[i],0});
        }else if(mp[aa[i]]==2){
            ans.push_back({aa[i],v[aa[i]][1]-v[aa[i]][0]});
        }else{
            bool found = true;
            for(ll j=1;j<v[aa[i]].size()-1;j++){
                if((v[aa[i]][j-1]-v[aa[i]][j])!=(v[aa[i]][j]-v[aa[i]][j+1])){
                    found = false;
                    break;
                }
            }
            if(found){
                ans.push_back({aa[i],v[aa[i]][1]-v[aa[i]][0]});
            }
        }
    }
    cout<<ans.size()<<endl;
    for(auto val:ans){
        cout<<val.first<<" "<<val.second<<endl;
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