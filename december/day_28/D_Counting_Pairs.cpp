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
    ll n,x,y;cin>>n>>x>>y;
    ll a[n];ll sum=0,res=0;
    for(ll i=0;i<n;i++)cin>>a[i];
    for(ll i=0;i<n;i++)sum+=a[i];
    sort(a,a+n);
    for(ll i=0;i<n;i++){
    ll left=-1,right=-1;
        ll l=i+1,r=n-1;
        while(l<=r){
            ll mid=(l+r)/2;
            ll ok=sum-(a[mid]+a[i]);
            if(x<=ok&&ok<=y){
                left=mid;
                r=mid-1;
            }
            else if(ok<x)r=mid-1;
            else l=mid+1;
        }
        l=i+1,r=n-1;
        while(l<=r){
            ll mid=(l+r)/2;
            ll ok=sum-(a[mid]+a[i]);
            if(x<=ok&&ok<=y){
                right=mid;
                l=mid+1;
            }
            else if(ok<x)r=mid-1;
            else l=mid+1;
        }
        if(left!=-1 && right!=-1){
            res+=(right-left+1);
        }
    }
    cout<<res<<nl;
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