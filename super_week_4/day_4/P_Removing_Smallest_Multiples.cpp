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
    ll n,ans=0;cin>>n;
    string s;cin>>s;
    string vis(n,'1');
    for(int i=0;i<n;i++){
        if(s[i]=='0'){
            for(int j=i+1;j<=n;j+=(i+1)){
                if(s[j-1]=='1')break;
                if(vis[j-1]=='0')continue;
                vis[j-1]='0';
                ans+=(i+1);
            }
        }
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