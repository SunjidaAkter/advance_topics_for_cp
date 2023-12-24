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
    ll a[n],pos=0,mx=0;
    for(ll i=0;i<n;i++)cin>>a[i];
    for(ll i=0;i<n;i++){
        if(a[i]>0)pos+=a[i];
    }
    for(ll i=0;i<n;i++){
        if(i%2==0){
            if(a[i]>0){
                mx=max(mx,pos);
                pos-=a[i];
            }else{
                mx=max(mx,pos+a[i]);
            }
        }else{
            if(a[i]>0){
                pos-=a[i];
                mx=max(mx,pos);
            }else{
                mx=max(mx,pos);
            }
        }
    }
    cout<<mx<<nl;
    
}
int main(){
    FAST;
    int t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}