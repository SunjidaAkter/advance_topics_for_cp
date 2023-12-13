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
    ll n,mx=0,cnt=0,c=0;cin>>n;
    vector<ll>a(n);
    map<ll,ll>mp;
    for(int i=0;i<n;i++){
        cin>>a[i];
        mp[a[i]]++;
    }
    if(n==1)cout<<0<<nl;
    else{
        for(auto it:mp){
            mx=max(mx,it.second);
            if(it.second==1){
                cnt++;
            }
            c++;
            // cout<<it.second<<" ";
        }
        c=mp.size();
        // cout<<c-1<<"c";
        if(mx<=(c-1))cout<<mx<<nl;
        else if((mx-(c-1))==1||(mx-(c-1))==2){
            cout<<mx-1<<nl;
        }else cout<<c<<nl;
    }
}
int main(){
    FAST;
    int t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}