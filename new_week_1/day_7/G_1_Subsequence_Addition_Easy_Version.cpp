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
    ll n;cin>>n;
    ll a[n];
    for(ll i=0;i<n;i++)cin>>a[i];
    sort(a,a+n);
    ll pre[n];
    if(n==1){
        if(a[0]==1)yes;
        else no;
    }else if(n==2){
        if(a[0]==1&&a[1]==1)yes;
        else no;
    }else{
        bool f=1;
        pre[0]=1;
        pre[1]=1;
        for(ll i=1;i<n;i++){
            if(a[i]<=pre[i-1]){
                pre[i]=a[i]+pre[i-1];
            }else{
                f=0;break;
            }
        }
        if(f)yes;
        else no;
    }
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