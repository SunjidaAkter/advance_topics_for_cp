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
    vector<ll>a(n),b(n);
    for(ll i=0;i<n;i++)cin>>a[i];
    for(ll i=0;i<n;i++)cin>>b[i];
    ll sum=0,idx=0,mx=0;
    for(ll i=0;i<n;i++){
        if(a[i]<b[i]){
            sum++;
            idx=i;
            mx=max(mx,b[i]-a[i]);
            a[i]+=mx;
        }
    }
    if(sum>1)no;
    else{
        for(ll i=0;i<n;i++){
            if(i!=idx)a[i]-=mx;
        }
        for(ll i=0;i<n;i++){
            if(a[i]<b[i]||a[i]<0){
                no;return;
            }
        }
        yes;
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