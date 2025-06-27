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
    vector<ll>v;
    if(n%2==1){  
        v.push_back(3);
        v.push_back(1);
        v.push_back(2);
        for(ll i=4;i<=n;i++)v.push_back(i);
        for(ll i=3;i<n;i+=2)swap(v[i],v[i+1]);
        for(ll i=0;i<n;i+=1)cout<<v[i]<<" ";
        cout<<nl;
        return;
    }
    for(ll i=1;i<=n;i++)v.push_back(i);
    for(ll i=0;i<n;i+=2)swap(v[i],v[i+1]);
    for(ll i=0;i<n;i+=1)cout<<v[i]<<" ";
    cout<<nl;
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