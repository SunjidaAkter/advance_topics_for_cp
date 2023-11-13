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
    ll n,m;cin>>n>>m;
    priority_queue<ll,vector<ll>, greater<ll>>pq;
    for(ll i=0;i<n;i++){
        ll x;cin>>x;
        pq.push(x);
    }
    for(ll i=0;i<m;i++){
        ll x;cin>>x;
        pq.pop();
        pq.push(x);
    }
    ll sum=0;
    while(!pq.empty()){
        sum+=pq.top();
        pq.pop();
    }
    c(sum);
}
int main(){
    FAST;
    int t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}