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
    ll n,q;cin>>n>>q;
    vector<ll>a(n);
    for(ll i=0;i<n;i++)cin>>a[i];
    vector<ll>b(q+1);
    b[q]=0;
    for(ll i=0;i<q;i++)cin>>b[i];
    sort(all(b));
    vector<ll>pre(n+1,0);
    for(ll i=1;i<=n;i++){
        pre[i]=pre[i-1]+a[i-1];
    }
    ll sum=0;
    for(ll i=1;i<=q;i++){
        sum+=abs(pre[b[i]]-pre[b[i-1]]);
    }
    sum+=pre[n]-pre[b.back()];
    cout<<sum<<nl;
}
int main(){
    FAST;
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}