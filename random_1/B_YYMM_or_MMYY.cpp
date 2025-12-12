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
    string s;cin>>s;
    ll y=0,m=0;
    for(ll i=0;i<2;i++){
        y=y*10+(s[i]-'0');
    }
    for(ll i=2;i<4;i++){
        m=m*10+(s[i]-'0');
    }
    if(y>=1 && y<=12 && m>=1 && m<=12){
        cout<<"AMBIGUOUS"<<nl;
    }else if( m>=1 && m<=12){
        cout<<"YYMM"<<nl;
    }else if( y<=12 && y>=1){
        cout<<"MMYY"<<nl;
    }else{
        cout<<"NA"<<nl;
    }    
}
int main(){
    FAST;
    int t=1;
    // cin>>t;
    while(t--){
        solve();
    }
    return 0;
}