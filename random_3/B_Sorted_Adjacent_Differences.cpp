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
    vector<ll>v(n);
    for(ll i=0;i<n;i++)cin>>v[i];
    sort(all(v));
    vector<ll>ans;
    ll i=0,j=n-1;
    while(i<j){
        ans.push_back(v[i]);
        ans.push_back(v[j]);
        i++,j--;
    }
    if(ans.size()<n)ans.push_back(v[i]);
    reverse(all(ans));
    for(ll i=0;i<n;i++)cout<<ans[i]<<" ";
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