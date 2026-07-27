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
    vector<pair<pii,ll>>v(n);
    for(ll i=0;i<n;i++){
        ll x,y;cin>>x>>y;
        v[i]={{x,y},i+1};
    }
    sort(all(v));
    priority_queue<pii, vector<pii>, greater<pii>> q;
    ll cnt=1,mx=1;
    vector<ll>ans(n);
    q.push({v[0].first.second,cnt});
    ans[v[0].second-1]=q.top().second;
    for(ll i=1;i<n;i++){
        if(q.top().first<v[i].first.first){
            ll curr=q.top().second;
            ans[v[i].second-1]=curr;
            q.pop();
            q.push({v[i].first.second,curr});
        }else{
            cnt++;
            ans[v[i].second-1]=cnt;
            q.push({v[i].first.second,cnt});
        }
        mx=max((ll)q.size(),mx);
    }   
    cout<<mx<<nl;
    for(auto &x:ans)cout<<x<<" ";
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