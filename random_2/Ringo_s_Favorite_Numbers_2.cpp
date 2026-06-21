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
ll factorial(ll n){
    if(n==0)return 1;
    return n*factorial(n-1);
}
void solve(){
    ll n;cin>>n;
    vector<ll>a(n);
    for(ll i=0;i<n;i++)cin>>a[i];
    
    map<pair<ll,ll>,ll>mp;
    for(ll i=0;i<n;i++){
        if(a[i]<100)mp[{0,a[i]}]++;
        else{
            if((a[i]/100)%2)mp[{1,a[i]%100}]++;
            else mp[{0,a[i]%100}]++;
        }
    }
    vector<ll>ans;
    for(auto it:mp){
        ans.push_back(it.second);
    }
    ll sum=0,m=ans.size();
    for(ll i=0;i<m;i++){
       sum+=(ans[i]*(ans[i]-1)/2);
    }
    cout<<sum<<nl;
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