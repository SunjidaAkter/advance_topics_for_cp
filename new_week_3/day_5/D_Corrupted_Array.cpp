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
    vector<ll>a(n+2);
    ll sum=0;
    for(ll i=0;i<n+2;i++){
        cin>>a[i];
    }
    sort(all(a));
    ll x=a.back();
    a.pop_back();
    for(ll i=0;i<n+1;i++){
        sum+=a[i];
    }
    // cout<<sum-x<<nl;
    auto it=find(all(a),(sum-x));
    if(it!=a.end()){
        a.erase(it);
        for(ll val:a)cout<<val<<" ";
        cout<<nl;
    }else{
        if(sum-a.back()==0){
            a.pop_back();
            for(ll val:a)cout<<val<<" ";
        }else cout<<-1<<nl;
    }
    // cout<<sum<<nl;
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