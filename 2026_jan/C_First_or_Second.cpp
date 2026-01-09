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
/*
*সব step simulate না করে
*শেষে কে unchosen থাকবে সেটা fix করে চিন্তা করলে problem সহজ হয়।

*👉 অনেক problem-এ brute force না করে
*final configuration ধরে চিন্তা করা দরকার।
*/
void solve(){
    ll n;cin>>n;
    vector<ll>a(n);
    for(ll i=0;i<n;i++)cin>>a[i];
    vector<ll>pref(n+1,0);
    for(ll i=0;i<n;i++){
        if(i==0)pref[i+1]=pref[i]+a[i];
        else pref[i+1]=pref[i]+abs(a[i]);
    }
    vector<ll>suff(n+1,0);
    for(ll i=n-1;i>=0;i--){
        suff[i]=suff[i+1]+(-a[i]);
    }
    ll ans=LLONG_MIN;
    ans=max(ans,suff[1]);
    for(ll i=1;i<n;i++){
        ans=max(ans,pref[i]+suff[i+1]);
    }
    cout<<ans<<nl;
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