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
    char c;cin>>c;
    string s;cin>>s;
    bool ok=1,odd=0,even=0;
    for(int i=0;i<n;i++){
        if(s[i]!=c){
            ok=0;
        }
    }
    if(ok)cout<<0<<nl;
    else{
        for(int i=1;i<=n;i++){
            ok=1;
            for(int j=i-1;j<n;j+=i){
                if(s[j]!=c){
                    ok=0;
                    break;
                }
            }
            if(ok){cout<<1<<nl<<i<<nl;return;}
        }
        cout<<2<<nl<<n-1<<" "<<n<<nl;
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