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
typedef pair<ll,ll>pii;
#define forl(ty,var,str,end) for(ty var=str; var<end; var++)
# define FAST ios_base :: sync_with_stdio (false) ; cin.tie(0) ; cout.tie(0)
void solve(){
    ll n;cin>>n;
    priority_queue<pii>pq;
    vector<pii>ans;
    for(ll i=1;i<=n;i++){
        ll x;cin>>x;
        if(x>0)pq.push({x,i});
    }
    while(pq.size()>1){
        pii f=pq.top();
        pq.pop();
        pii s=pq.top();
        pq.pop();
        ans.push_back({f.second,s.second});
        f.first--;
        s.first--;
        if(f.first)pq.push(f);
        if(s.first)pq.push(s);
    }
    cout<<ans.size()<<nl;
    for(auto val:ans)cout<<val.first<<" "<<val.second<<nl;
}
int main(){
    FAST;
    int t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}