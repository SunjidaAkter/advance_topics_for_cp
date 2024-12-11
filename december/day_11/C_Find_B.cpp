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
    ll n,q;cin>>n>>q;
    vector<ll>a(n+1);
    for(ll i=1;i<n+1;i++)cin>>a[i];
    vector<ll>pref(n+1,0);
    vector<ll>cnt1(n+1,0);
    pref[0]=0;
    cnt1[0]=0;
    for(ll i=1;i<n+1;i++){
        pref[i]=pref[i-1]+a[i];
        if(a[i]==1)cnt1[i]+=cnt1[i-1]+1;
        else cnt1[i]=cnt1[i-1];
    }
    while(q--){
    // cout<<q<<nl;
        ll l,r;cin>>l>>r;
        ll sum=pref[r]-pref[l-1];
        sum-=(r-l+1);
        ll tot1=cnt1[r]-cnt1[l-1];
        if(tot1==0){
            if(l==r){
                no;
            }else{
                yes;
            } 
        }else{
            if(sum>=tot1){
                yes;
            }else{
                no;
            }
        }
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