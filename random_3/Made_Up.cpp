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
    vector<ll>b(n);
    vector<ll>c(n);
    for(ll i=0;i<n;i++)cin>>a[i];
    for(ll i=0;i<n;i++)cin>>b[i];
    for(ll i=0;i<n;i++)cin>>c[i];
    map<ll,ll>mpA;
    map<ll,ll>mpC;
    for(ll i=0;i<n;i++){
        mpA[a[i]]++;
        mpC[c[i]]++;
    }
    ll sum=0;
    for(ll i=0;i<n;i++){
        if(mpA[b[i]]>0 && mpC[i+1]>0){
            sum+=mpA[b[i]]*mpC[i+1];
        }
    }
    cout<<sum<<endl;
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