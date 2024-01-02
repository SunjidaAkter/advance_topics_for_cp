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
    ll n;cin>>n;
    string s;cin>>s;
    bool f=1;
    ll cnt=0,mx=0;
    if(s[0]=='<'){
        f=0;
    }else f=1;
    for(ll i=0;i<n;i++){
        if(s[i]=='<'){
            if(f==0){
                cnt=0;
                f=1;
            }
            cnt++;
        }else{
            if(f==1){
                cnt=0;
                f=0;
            }
            cnt++;
        }
        mx=max(mx,cnt);
    }
    cout<<mx+1<<nl;
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