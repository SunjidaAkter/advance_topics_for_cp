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
    vector<ll> a(n);
    for(ll i=0;i<n;i++)cin>>a[i];
    vector<ll> v(n);
    v=a;
    ll cnt=0,ans=0;
    for(ll i=0;i<n;i++){
        if(v[i]>0){
            cnt+=v[i];
        }else if(cnt>0&&v[i]<0){
            ans+=min(abs(v[i]),cnt);
            cnt=max((ll)0,cnt+v[i]);
        }
    }
    ll s=0;
    for(ll i=0;i<n;i++){
        if(a[i]>0)s+=a[i];
    }
    cout<<s-ans<<nl;
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