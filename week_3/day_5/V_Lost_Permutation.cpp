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
    ll n,s;cin>>n>>s;
    ll a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    sort(a,a+n);
    ll s1=0,m=a[n-1],sum=0;
    for(int i=0;i<n;i++)s1+=a[i];
    while(s+s1>sum){
        sum=((m)*(m+1)/2);
        // cout<<m<<"m"<<sum<<" ";
        m++;
    }
    if(sum-s1==s)yes;
    else no;
}
int main(){
    FAST;
    int t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}