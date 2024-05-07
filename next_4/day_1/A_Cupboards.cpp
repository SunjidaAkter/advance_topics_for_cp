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
    for(ll i=0; i<n;i++){
        cin>>a[i]>>b[i];
    }
    ll mn1=LONG_MAX,mn2=LONG_MAX,c1=0,c2=0;
    for(ll i=0; i<n;i++){
        if(a[i]==0)c1++;
        if(a[i]==1)c2++;
    }
    mn1=min(c1,c2);
    c1=0,c2=0;
    for(ll i=0; i<n;i++){
        if(b[i]==0)c1++;
        if(b[i]==1)c2++;
    }
    mn2=min(c1,c2);
    cout<<mn1+mn2<<endl;
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