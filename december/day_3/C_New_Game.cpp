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
const ll N=1e9;
void solve(){
    ll n,k;cin>>n>>k;
    ll a[n];
    map<ll,ll>mp;
    for(ll i=0;i<n;i++){
        cin>>a[i];
        mp[a[i]]++;
    }
    vector<ll>v; 
    ll mx=0,mx1=0;
    for(auto x:mp){
        v.push_back(x.first);
        mx=max(mx,x.second);
    }
    if(k==1){
        cout<<mx<<nl;
        return;
    }
    for(ll i=0;i<v.size();i++){
        ll minus=0,cur=mp[v[i]],cnt=k-1,idx=i,have=0,found=0;
        while(i+1<v.size() && v[i+1]==v[i]+1){
            cnt--;
            if(cnt<=0){
                cur+=mp[v[i+1]];
                have=cur-minus;
                mx1=max(mx1,have);
                minus+=mp[v[idx]];
                // cout<<"cc"<<minus<<" ";
                idx++;
                found=1;
            }else{
                cur+=mp[v[i+1]];
            }
            // cout<<"cur"<<cur<<" ";
            i++;
        }
        if(found==0){
            mx1=max(mx1,cur);
            // mx=max(mx,mx1);
        }
        // cout<<"mx"<<mx1<<" ";
    }
    cout<<mx1<<nl;
 
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