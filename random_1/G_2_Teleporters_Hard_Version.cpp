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
    ll n,k;cin>>n>>k;
    vector<ll>a(n);
    for(ll i=0;i<n;i++)cin>>a[i];
    vector<ll>v;
    
    for(ll i=0;i<(n/2)+(n%2);i++){
        // cout<<"i: "<<i<<" a[i]: "<<a[i]<<nl;
        v.push_back(i+1+a[i]);
        // v[i]=i+1+a[i];
    }
    sort(all(v));
    ll x=v[0];
    reverse(all(v));
    v.pop_back();
    for(ll i=n-1,j=1;i>=((n/2)+(n%2));i--,j++){
        v.push_back(j+a[i]);
    }
    sort(all(v));
    // for(ll i=0;i<n;i++)cout<<v[i]<<" ";
    // cout<<x<<nl;
    ll sum = x, cnt = 0;
    if(sum<=k)cnt++;
    for (int i = 0; i < n-1; i++) {
        if (sum + v[i] > k) break;
        sum += v[i];
        cnt++;
    }
    if(cnt==0){
        vector<pii>v1(n);
        for(ll i=0;i<n;i++){
            v1[i]={a[i]+1+i,i};
        }
        sort(all(v1));
        ll x=v1[0].first;
        ll idx=v1[0].second;
        if(x<=k){
            cnt=1;
        }    
    }
    cout<<cnt<<nl;
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