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
    ll n,k;cin>>n>>k;
    vector<ll>a(n);
    ll sum=0;
    for(ll i=0;i<n;i++)cin>>a[i];
    for(ll i=0;i<n;i++)sum+=a[i];
    sort(all(a));
    for(ll i=0;i<n;i++)cout<<a[i]<<" ";
    ll s1=0,s2=0;
    for(ll i=0;i<2*k;i++)s1+=a[i];
    for(ll i=n-1;i>=n-k;i--)s2+=a[i];
    ll mn=min(s1,s2);
    cout<<sum-mn<<endl;
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