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
ll check(vector<ll> a,ll n,ll given,ll mid){
    for(ll i=0;i<n;i++){
        if(a[i]<mid){
            ll need = mid-a[i];
            if(given<need)return -1;
            else{
                given-=need;
            }
        }
        a[i]-=mid;
    }
    ll cnt=0;
    for(ll i=0;i<n;i++){
        if(a[i]>0)cnt++;
    }
    return cnt+given;
}
void solve(){
    ll n,k;cin>>n>>k;
    vector<ll> a(n);
    for(ll i=0;i<n;i++)cin>>a[i];
    ll l=1,r=1e13,ans=0;
    while(l<=r){
        ll mid = l+((r-l)/2);
        if(check(a,n,k,mid)!=-1){
            ans=max(ans,1+check(a,n,k,mid)+(mid-1)*n);
            l=mid+1;
        }
        else{
            r=mid-1;
        }
    }
    cout<<ans<<nl;
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