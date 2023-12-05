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
    ll n,q;cin>>n>>q;
    ll a[n];
    for(ll i=0;i<n;i++)cin>>a[i];
    bool flip=0;
    ll cur=a[0],cnt=0;
    for(ll i=1;i<n;i++){
        if(flip){
            if(a[i-1]>a[i]){
                cur=a[i];
            }else{
                cur=a[i];
                flip=0;
                cnt-=a[i-1];
            }
        }else{
            if(a[i-1]<a[i]){
                cur=a[i];
            }else{
                cur=a[i];
                flip=1;
                cnt+=a[i-1];
            }
        }
    }
    if(!flip)cnt+=a[n-1];
    c(cnt);
}
int main(){
    FAST;
    int t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}