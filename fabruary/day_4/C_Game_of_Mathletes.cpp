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
    ll a[n];
    for(ll i=0;i<n;i++)cin>>a[i];
    sort(a,a+n);
    ll ans=0;
    map<ll,ll>mp;
    map<ll,ll>processed;
    for(ll i=0;i<n;i++){
        mp[a[i]]++;
    }
    for(ll i=0;i<n;i++){
        if(processed[a[i]]>0)continue;
        if(mp[k-a[i]]>0){
            if(a[i]==(k-a[i])){
                ans+=(min(mp[a[i]],mp[k-a[i]])/2);
                mp[a[i]]-=(min(mp[a[i]],mp[k-a[i]])/2);
                mp[k-a[i]]-=(min(mp[a[i]],mp[k-a[i]])/2);
                processed[a[i]]++;

            }else{
                ans+=min(mp[a[i]],mp[k-a[i]]);
                mp[a[i]]-=min(mp[a[i]],mp[k-a[i]]);
                mp[k-a[i]]-=min(mp[a[i]],mp[k-a[i]]);
                processed[a[i]]++;
                processed[k-a[i]]++;
            }
        }
    }
    // for(ll i=0;i<n;i++)cout<<a[i]<<" ";
    cout<<ans<<nl;
    //* 1 8, 2 7, 3 6, 4 5 
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