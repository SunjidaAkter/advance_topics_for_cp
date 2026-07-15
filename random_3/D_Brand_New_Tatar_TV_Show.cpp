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
    vector<ll>v(n);
    for(ll i=0;i<n;i++)cin>>v[i];
    sort(all(v));
    map<ll,ll>mp;
    mp[v[0]]++;
    vector<pii>a;
    for(ll i=1;i<n;i++){
        if(mp[v[i]]==0)a.push_back({v[i-1],mp[v[i-1]]});
        mp[v[i]]++;
    }
    a.push_back({v[n-1],mp[v[n-1]]});
    while(a.size()>0){
        n=a.size();
        if(a[n-1].second % 2 == 0){
            yes;return;
        }
        if(n==1){
            no;return;
        }
        if(a[n-1].first-a[n-2].first<=k){
            yes;return;
        }
        a.pop_back();
    }



    
    
    
    // reverse(all(v));
    // if(mp[v[n-1]]==n){
    //     if(n&1)no;
    //     else yes;
    //     // cout<<"a"<<nl;
    //     return;
    // }
    // // for(auto &x:mp)a.push_back({x.first,x.second});
    // if(a[0].first-a[1].first<=k){
    //     yes;
    //     return;
    // }
    // ll cnt=a[0].first,sum=1;
    // for(ll i=1;i<a.size();i++){
    //     // cout<<a[i].first-a[i-1].first<<" x "<<nl;
    //     if(a[i-1].first-a[i].first>k){
    //         if(sum>1||a[i].second%2==0){
    //             yes;
    //             return;
    //         }else {cnt=a[i].second;sum=1;}
    //     }else{
    //         cnt+=a[i].second;
    //         sum++;
    //     }
    // }
    // if(sum>1||a[a.size()-1].second%2==0){
    //     yes;
    //     return;
    // }
    // no;
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