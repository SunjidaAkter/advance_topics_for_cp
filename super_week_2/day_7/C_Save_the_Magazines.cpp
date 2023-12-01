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
    int n;cin>>n;
    string s;cin>>s;
    s="0"+s+"0";
    vector<ll>a(n+2,0);
    for(int i=1;i<=n;i++)cin>>a[i];
    vector<ll>v;
    ll mx=0,ans=0,pos=0;
    for(int i=0;i<n+2;i++){
        if(s[i]=='0'){
            v.push_back(mx);
            mx=0;
            pos=i;
        }else{
            mx=max(mx,a[pos]-a[i]);
        }
    }
    for(int i=0;i<n+2;i++){
        if(s[i]=='1')ans+=a[i];
    }
    for(int i=0;i<v.size();i++){
        ans+=v[i];
    }
    cout<<ans<<nl;
}
int main(){
    FAST;
    int t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}