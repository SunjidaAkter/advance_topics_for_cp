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
    vector<ll>a(n);
    ll mn=LONG_MAX,mx=0;
    for(ll i=0;i<n;i++){
        cin>>a[i];
        mn=min(mn,a[i]);
        mx=max(mx,a[i]);
    }
    cout<<mx-mn<<" ";
    ll cnt1=0,cnt2=0;
    for(ll i=0;i<n;i++){
        if(a[i]==mn)cnt1++;
        if(a[i]==mx)cnt2++;
    }
    if(mx==mn)cout<<(cnt1-1)*cnt1/2<<nl;
    else cout<<cnt1*cnt2<<nl;
}
int main(){
    FAST;
    int t=1;
    // cin>>t;
    while(t--){
        solve();
    }
    return 0;
}