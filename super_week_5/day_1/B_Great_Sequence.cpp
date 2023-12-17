#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define all(X) (X).begin(), (X).end()
#define pub push_back
#define pob pop_back
#define nl  '\n'
#define c(x) cout<<x<<nl
#define yes cout<<"YES"<<nl
#define no cout<<"NO"<<nl
#define Yes cout<<"Yes"<<nl
#define No cout<<"No"<<nl
typedef pair<int,int>pii;
#define forl(ty,var,str,end) for(ty var=str; var<end; var++)
# define FAST ios_base :: sync_with_stdio (false) ; cin.tie(0) ; cout.tie(0)
void solve(){
    ll n,x,c=0;cin>>n>>x;
    ll a[n];map<ll,ll>mp;
    for(int i=0;i<n;i++){
        cin>>a[i];
        mp[a[i]]++;
    }
    sort(a,a+n);
    for(int i=0;i<n;i++){
        if(mp[a[i]*x]>0&&mp[a[i]]>0){
            mp[a[i]]--;
            mp[a[i]*x]--;
        }
    }
    for(auto it:mp){
        c+=it.second;
        // if(it.second>0)
        // cout<<it.first<<" ";
    }
    cout<<c<<nl;
}
int main(){
    FAST;
    int t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}