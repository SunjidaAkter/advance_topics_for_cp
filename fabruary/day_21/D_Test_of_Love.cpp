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
    ll n,m,k;cin>>n>>m>>k;
    string s;cin>>s;
    ll w=0,c=0,cnt=0;bool ok=false;
    for(ll i=0;i<n;i++){
        if(s[i]=='W'||s[i]=='C'){
            if(s[i]=='W')cnt++;
            else if(s[i]=='C')c++,cnt++;
            if(cnt>m-1){
                if(s[i]=='C'){
                    no;return;
                }else{
                    w++;
                    if(w>k){
                        no;return;
                    }
                }
            }
        }
        else{
            cnt=0,c=0;
        } 
    }
    yes;
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