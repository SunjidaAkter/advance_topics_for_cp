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
    string a,b;cin>>a>>b;
    if(b=="a")cout<<1<<nl;
    else{
        int cnt=0;
        for(int i=0;i<b.size();i++){
            if(b[i]=='a'){
                cnt=1;
                break;
            }
        }
        ll ans=pow(2,(a.size()));
        if(cnt==1)cout<<-1<<nl;
        else cout<<ans<<nl;
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