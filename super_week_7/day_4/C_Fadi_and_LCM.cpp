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
ll lcm(ll a,ll b){
    return (a/__gcd(a,b))*b;
}
void solve(){
    ll n,a,b,mx=0;cin>>n;
    vector<ll>v;
    for(ll i=1;i*i<=n;i++){
        if(n%i==0){
            v.push_back(i);
            v.push_back(n/i);
        }
    }
    for(ll i=0;i<v.size();i++){
        if(lcm(v[i],n/v[i])==n&&(!mx||max(v[i],n/v[i])<mx)){
            a=v[i],b=n/v[i],mx=max(v[i],n/v[i]);
        }
    }
    cout<<a<<" "<<b;
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