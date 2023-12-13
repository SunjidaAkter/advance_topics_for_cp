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
bool isValid(ll dif,ll a[],ll n,ll c){
    ll cnt=0;
    for(ll i=1;i<n;i++){
        if((a[i]-a[i-1])<dif){
            cnt+=(a[i]-a[i-1]);
        }else cnt+=dif;
    }
    cnt+=dif;
    return (cnt>=c);
}
void solve(){
    ll n,c;cin>>n>>c;
    ll a[n];
    for(ll i=0;i<n;i++)cin>>a[i];
    sort(a,a+n);
    ll l=0,r=1e18;
    ll ans;
    while(l<=r){
        ll mid=l+(r-l)/2;
        if(isValid(mid,a,n,c)){
            ans=mid;
            r=mid-1;
        }else{
            l=mid+1;
        }
    }
    cout<<ans<<endl;
}
int main(){
    FAST;
    int t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}