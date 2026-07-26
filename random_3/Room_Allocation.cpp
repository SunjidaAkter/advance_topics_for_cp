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
    vector<pii>v(n);
    for(ll i=0;i<n;i++){
        ll x,y;cin>>x>>y;
        v[i]={x,y};
    }
    sort(all(v));
    priority_queue<pii, vector<pii>, greater<pii>> q;
    ll cnt=1,mx=1;
    q.push({v[0].second,cnt});
    for(ll i=1;i<n;i++){
        if(q.top().first<v[i].first){
            cnt=q.top().second;
            q.pop();
            q.push({v[i].second,cnt});
        }else{
            cnt++;
            q.push({v[i].second,cnt});
        }
        mx=max((ll)q.size(),mx);
    }   
    cout<<mx<<nl;
    while(!q.empty()){
        cout<<q.top().second<<" ";
        q.pop();
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