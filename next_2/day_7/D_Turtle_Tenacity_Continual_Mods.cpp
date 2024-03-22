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
    ll GCD=__gcd(a,b);
    ll LCM=(a/GCD)*b;
    return LCM;
}
void solve(){
    ll n;cin>>n;
    ll a[n];
    for(ll i=0;i<n;i++)cin>>a[i];
    sort(a,a+n);
    if(a[0]!=a[1])yes;
    else{
        bool f=0;
        for(ll i=1;i<n;i++){
            if(a[i]%a[0]!=0){
                f=1;break;
            }
        }
        if(f)yes;
        else no;
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