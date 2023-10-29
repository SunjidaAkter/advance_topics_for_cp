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
typedef pair<ll,ll>pii;
#define forl(ty,var,str,end) for(ty var=str; var<end; var++)
# define FAST ios_base :: sync_with_stdio (false) ; cin.tie(0) ; cout.tie(0)
bool isValid(ll mid,ll s){
    ll n=mid;
    ll sum=0;
    while(n!=0){
        sum+=n%10;
        n/=10;
    }
    // cout<<mid<<"s";
    return ((mid-sum)>=s);
}
void solve(){
    ll n,s;cin>>n>>s;
    // ll a[n];
    // for(ll i=0;i<n;i++)a[i]=i+1;
    // sort(a,a+n);
    ll l=1,r=n;
    ll ans=-1,sum=0;
    while(l<=r){
        ll mid=l+(r-l)/2;
        // cout<<mid<<nl;
        if(isValid(mid,s)){
            ans=mid;
            r=mid-1;
        }else{
            l=mid+1;
        }
    }
    if(ans==-1||ans>n)cout<<0<<endl;
    else cout<<n-ans+1<<endl;
}
int main(){
    FAST;
    // ll t;cin>>t;
    // while(t--){
        solve();
    // }
    return 0;
}