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
    ll n;cin>>n;
    ll a[n];bool ok=0;
    for(ll i=0;i<n;i++)cin>>a[i];
    ll prep[n];prep[0]=a[0];
    for(ll i=1;i<n;i++){
        if(prep[i-1]<a[i])prep[i]=prep[i-1]+a[i];
        else if(a[i]==0)prep[i]=prep[i-1];
        else{
            ok=1;break;
        }
    }
    if(ok)c(-1);
    else{
        for(ll val:prep)cout<<val<<" ";
        cout<<nl;
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