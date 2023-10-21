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
    char ch;cin>>ch;
    string s;cin>>s;
    s+=s;int ans=0,mx=0;
    bool ok=false;
    if(ch=='g')cout<<0<<nl;
    else{
        for(int i=0;i<2*n;i++){
            if(s[i]==ch){
                ok=true;
                // ans=1;
            }
            if(ok&&s[i]!='g'){
                ans++;
            }
            if(ok&&s[i]=='g'){
                mx=max(mx,ans);
                ans=0;
                ok=false;
            }
        }
    c(mx);
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