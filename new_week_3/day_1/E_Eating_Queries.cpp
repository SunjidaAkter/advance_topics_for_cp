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
    ll a[n];
    for(ll i=0;i<n;i++)cin>>a[i];
    sort(a,a+n);
    reverse(a,a+n);
    ll pre[n];
    pre[0]=a[0];
    for(ll i=1;i<n;i++){
        pre[i]=pre[i-1]+a[i];
    }
    while(q--){
        ll x;cin>>x;
        if(x>pre[n-1]){
            cout<<-1<<nl;
            continue;
        }
        ll l=0,r=n-1,ans=-1;
        while(l<=r){
            ll mid=l+((r-l)/2);
            if(pre[mid]>=x){
                ans=mid;
                r=mid-1;
            }else l=mid+1;
        }
        cout<<ans+1<<nl;
    }
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