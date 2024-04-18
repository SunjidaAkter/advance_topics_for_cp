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
    ll a[n];
    for(ll i=0;i<n;i++)cin>>a[i];
    ll el=a[0];
    vector<ll>pre(n),suf(n);
    pre[0]=0;suf[n-1]=0;
    for(ll i=1;i<n;i++){
        if(a[i-1]==el)pre[i]=pre[i-1]+1;
        else pre[i]=0;
    }
    for(ll i=n-2;i>=0;i--){
        if(a[i+1]==el)suf[i]=suf[i+1]+1;
        else suf[i]=0;
    }
    ll mn=LONG_MAX;
    for(ll i=1;i<n-1;i++){
        if(a[i]!=el)mn=min(mn,pre[i]);
        if(a[i]!=el)mn=min(mn,suf[i]);
    }
    if(mn==LONG_MAX){
        cout<<-1<<nl;return;
    }
    cout<<mn<<nl;
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