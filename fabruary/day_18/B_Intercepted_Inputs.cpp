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
    ll a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    if(n==3){
        cout<<"1 1"<<nl;
        return;
    }
    map<ll,ll>mp;
    vector<ll>v;
    for(int i=0;i<n;i++) mp[a[i]]++;
    for(int i=0;i<n;i++){
        if(((n-2)%a[i]==0 && v.size()<2&&a[i]!=(n-2)/a[i] && mp[(n-2)/a[i]]>0)||(n-2)%a[i]==0 && v.size()<2&&a[i]==(n-2)/a[i] && mp[(n-2)/a[i]]>1){
            v.push_back(a[i]);
            v.push_back((n-2)/a[i]);
            break;
        }
        // if(v.size()==2)break;
    }
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
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