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
    ll n,k;cin>>n>>k;
    queue<ll>q;
    for(ll i=1;i<=n;i++)q.push(i);
    while(!q.empty()){
        for(ll i=1;i<=k;i++){
            if(!q.empty()){
                q.push(q.front());
                q.pop();
            }
        }
        if(!q.empty()){
            cout<<q.front()<<" ";
            q.pop();
        }
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