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
    ll a[n],mn=INT_MAX,mn_idx;
    bool found=false;
    for(ll i=0;i<n;i++)cin>>a[i];
    for(ll i=0;i<n;i++){
        if(mn>a[i]){
            mn=a[i];
            mn_idx=i;
        }
    }
    vector <ll>  srtd;
    for(ll i=mn_idx;i<n;i++){
        srtd.push_back(a[i]);
    }
    
    for(ll i=0;i<=mn_idx-1;i++){
        srtd.push_back(a[i]);
        // if(a[i]>a[i+1]){
        //     found=true;
        //     break;
        // }
    }
    for(ll i=n-1;i>=0;i--){
        if(srtd[i]==mn){
            srtd.pop_back();
        }else break;
    }
    if(is_sorted(all(srtd)))Yes;
    else No;
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