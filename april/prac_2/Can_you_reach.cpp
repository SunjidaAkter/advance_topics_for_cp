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
    vector<ll>a(n);
    for(auto &x:a)cin>>x;
    vector<ll>p;
    for(int i=1;i<n-1;i++){
        if((a[i-1]<a[i]&&a[i]>a[i+1])||(a[i-1]>a[i]&&a[i]<a[i+1]))p.push_back(i);
    }
    ll pre=0;
    ll ans=n*(n-1)/2;
    if(p.size()>1){
        for(int i=0;i<p.size()-1;i++){
            ll x=p[i]-pre;
            ll y=n-1-p[i+1];
            ans-=(x*y);
            pre=p[i];
        }
    }
    cout<<ans<<endl;
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