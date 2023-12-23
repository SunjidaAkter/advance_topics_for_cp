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
    ll n,k,b;
    cin>>n;
    vector<vector<ll>>v;
    set<ll>se,tset;
    ll mx=0;
    map<ll,ll>mp,tmp;
    map<ll,vector<ll>>ind;
    for(ll i=0;i<n;i++){
        vector<ll>temp;
        cin>>k;
        for(ll j=0;j<k;j++){
            cin>>b;
            temp.push_back(b);
            mp[b]++;
            se.insert(b);
            ind[b].push_back(i);
        }
        v.push_back(temp);
    }
    set<ll>::iterator it;
    for(it=se.begin();it!=se.end();it++){
        tset=se;
        tmp=mp;
        ll val=*it;
        for(ll i=0;i<(ll)ind[val].size();i++){
            for(ll j=0;j<(ll)v[ind[val][i]].size();j++){
                tmp[v[ind[val][i]][j]]--;
                if(tmp[v[ind[val][i]][j]]==0){
                    tset.erase(v[ind[val][i]][j]);
                }

            }
        }
        mx=max(mx,(ll)tset.size());
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