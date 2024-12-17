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
    for(ll i=0; i<n; i++){
        cin>>a[i];
    }
    unordered_set<ll>st;
    for(ll i=0; i<n; i++){
        st.insert(a[i]);
    }
    vector<ll>v;
    while (st.size()!=0){
        // cout<<*st.begin()<<" ";
        v.push_back(*st.begin());
        st.erase(st.begin());
    }
    reverse(all(v));
    map<ll,ll>mp;
    for(ll i=0; i<v.size(); i++){
        mp[v[i]]++;
    }
    // // for(ll i=0; i<v.size(); i++)cout<<v[i]<<" ";
    // // cout<<nl;
    // vector<ll>ans;
    // if(a[1]==a[0]){
    //     ans.push_back(a[0]);
    //     // ans.push_back(a[1]);
    // }else{
    //     ans.push_back(a[0]);
    //     // ans.push_back(a[1]);
    // }
    for(ll i=0; i<n; i++){
        if(mp[i+1]>0)continue;
        else v.push_back(i+1);
    }
    // ll x=v.size();
    // if(v.size()!=n){
    //     while(x<n)v.push_back(++x);
    // }
    for(ll i=0;i<n;i++){
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