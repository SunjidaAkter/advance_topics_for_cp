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
    ll a[n],ans=0,mx=0;
    for(ll i=0;i<n;i++)cin>>a[i];
    ll pre1[n],pre0[n];
    if(a[0]==0){
        pre0[0]=1;
        pre1[0]=0;
    }else{
        pre0[0]=0;
        pre1[0]=1;
    }
    for(int i=1;i<n;i++){
        if(a[i]==0){
            pre0[i]=pre0[i-1]+1;
            pre1[i]=pre1[i-1];
        }else{
            pre1[i]=pre1[i-1]+1;
            pre0[i]=pre0[i-1];
        }
    }
    for(int i=1;i<n;i++){
        if(a[i]==0){
            ans+=pre1[i-1];
        }
    }
    for(int i=0;i<n;i++){
        if(a[i]==0){
            mx=max(mx,+(pre0[n-1]-pre0[i])-pre1[i]);
        }else{
            mx=max(mx,-(pre0[n-1]-pre0[i])+pre1[i]-1);
        }
    }
    cout<<mx+ans<<nl;
}
int main(){
    FAST;
    int t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
