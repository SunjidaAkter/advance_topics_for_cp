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
ll n,k;
vector<ll>a;
bool good(double x){
    double sum=0;
    for(ll i=0;i<n;i++){
        sum+=floor(a[i]/x);
    }
    return sum>=k;
}
void solve(){
    cin>>n>>k;
    a.resize(n);
    for(ll i=0;i<n;i++)cin>>a[i];
    double l=0,r=1e8;
    for(ll i=0;i<=70;i++){
        double m=(l+r)/2;
        if(good(m))l=m;
        else r=m;
    }
    cout<<setprecision(20)<<l;
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