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
bool check(vector<ll>&a,vector<ll>&b,ll mid,ll m){
    ll need=0;
    for(ll i=0;i<a.size();i++){
        ll tmp=max(mid*a[i]-b[i],(ll)0);
        need+=tmp;
        if(need>m)return false;
    }
    return need<=m;
}
void solve(){
    ll n,m;cin>>n>>m;
    vector<ll>a(n);
    for(ll i=0;i<n;i++)cin>>a[i];    
    vector<ll>b(n);
    for(ll i=0;i<n;i++)cin>>b[i];   
    ll ans=0,l=1,r=9e9;
    while(l<=r){
        ll mid=l+((r-l)/2);
        if(check(a,b,mid,m)){
            ans=mid;
            l=mid+1;
        }else r=mid-1;
    }
    cout<<ans<<nl;
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