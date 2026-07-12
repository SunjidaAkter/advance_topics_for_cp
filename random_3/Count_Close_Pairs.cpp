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
    ll cnt=0,i=1;
    for(ll j=1;j<=n;j++){
        while(i<j){
            cout<<"? "<<i<<" "<<j<<endl;
            string s;cin>>s;
            if(s=="No"){
                i++;
            }
            else{
                cnt+=(j-i);
                break;
            }
        }
    }    
    cout<<"! "<<cnt<<endl;
    
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