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
    ll n;cin>>n;
    ll a[n];
    for(ll i=0;i<n;i++)cin>>a[i];
    sort(a,a+n);
    queue<ll>v1;
    queue<ll>v2;
    if(n&1)for(ll i=0;i<=(n/2);i++)v1.push(a[i]);
    else for(ll i=0;i<(n/2);i++)v1.push(a[i]);
    if(n&1)for(ll i=(n/2)+1;i<n;i++)v2.push(a[i]);
    else for(ll i=(n/2);i<n;i++)v2.push(a[i]);
    vector<ll>ans;bool ok=1;
    while(!v2.empty()){
        if(v1.front()==v2.front()){ok=0;break;}
        ans.push_back(v1.front());
        ans.push_back(v2.front());
        v1.pop();v2.pop();
    }
    if(!v1.empty()&&!ans.empty()){
        // cout<<v1.front()<<ans.size()<<"h";
        if(v1.front()==ans[ans.size()-1])ok=0;
        else ans.push_back(v1.front());
        v1.pop();
    }
    if(!ok)c(-1);
    else{for(ll val:ans)cout<<val<<" ";cout<<nl;}
}
int main(){
    FAST;
    int t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}