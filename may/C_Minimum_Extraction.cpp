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
    for(ll i=0;i<n;i++)cin>>a[i];
    if(n==1){
        cout<<a[0]<<nl;
        return;
    }
    sort(all(a));
    ll mn=a[0],tmp=a[0];
    for(ll i=1;i<n;i++){
        // mn=min(mn,(a[i]-tmp));
        mn=max(mn,(a[i]-tmp));
        tmp+=(a[i]-tmp);
    }
    cout<<mn<<nl;
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