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
    vector<ll> a(n),v;
    for(ll i=0;i<n;i++)cin>>a[i];
    ll mn=*min_element(all(a));
    for(ll i=0;i<n;i++){
        if(__gcd(a[i],mn)==mn){
            v.push_back(a[i]);
            a[i]=-1;
        }
    }
    sort(all(v));
    ll j=0;
    for(ll i=0;i<n;i++){
        if(a[i]==-1){
            a[i]=v[j];
            j++;
        }
    }
    for(ll i=1;i<n;i++){
        if(a[i-1]>a[i]){
            no;
            return;
        }
    }
    yes;
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