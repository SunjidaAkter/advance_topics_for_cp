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
    ll n,x;cin>>n;
    vector<ll>a(n);
    for(ll i=0;i<n;i++)cin>>a[i];
    if(n==1){cout<<0<<nl;return;}
    cout<<(n/2)+(n%2)<<nl;
    for(ll i=0;i<n;i+=2){
        if(i==n-1)cout<<i<<" "<<i+1<<" "<<min(a[i-1],a[i])<<" "<<"1000000007"<<nl;
        else {
            cout<<i+1<<" "<<i+1+1<<" "<<"1000000007"<<" "<<min(a[i+1],a[i])<<nl;
            a[i+1]=min(a[i],a[i+1]);
            a[i]=1000000007;
        }
    }
}
int main(){
    FAST;
    int t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}