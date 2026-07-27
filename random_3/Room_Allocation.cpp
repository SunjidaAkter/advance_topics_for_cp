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
    vector<pii>ans;
    q.push({v[0].first.second,cnt});
    ans.push_back({v[0].second,q.top().second});
    for(ll i=1;i<n;i++){
        if(q.top().first<v[i].first.first){
            ll curr=q.top().second;
            ans.push_back({v[i].second,curr});
            q.pop();
            q.push({v[i].first.second,curr});
            // cout<<ans.back()<<" + ";
        }else{
            cnt++;
            ans.push_back({v[i].second,cnt});
            q.push({v[i].first.second,cnt});
            // cout<<ans.back()<<" x ";
        }
        mx=max((ll)q.size(),mx);
    }   
    sort(all(ans));
    cout<<mx<<nl;
    for(auto &x:ans)cout<<x.second<<" ";
    cout<<nl;                 
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