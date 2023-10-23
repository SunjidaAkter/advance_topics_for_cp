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
    ll n,k,h;cin>>n>>k>>h;
    vector<ll> a(n);
    vector<ll> b(k);
    for(ll i=0;i<n;i++)cin>>a[i];
    sort(all(a));reverse(all(a));
    for(ll i=0;i<k;i++)cin>>b[i];
    sort(all(b));reverse(all(b));
    ll ans=0;
    if(n<=k){
        for(ll i=0;i<n;i++){
            if(b[i]*h>=a[i])ans+=a[i];
            else ans+=b[i]*h;
        }
    }else{
        for(ll i=0;i<k;i++){
            if(b[i]*h>=a[i])ans+=a[i];
            else ans+=b[i]*h;
        }
    }
    c(ans);
}
int main(){
    FAST;
    int t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}