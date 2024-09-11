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
    if(n>=0)cout<<n<<nl;
    else{
        string x=to_string(n),s1="",s2="";
        for(ll i=0;i<x.size()-1;i++){
            s1+=x[i];   
        }
        for(ll i=0;i<x.size();i++){
            if(i==x.size()-2)continue;
            s2+=x[i];   
        }
        ll a=stoi(s1),b=stoi(s2);
        cout<<max(a,b)<<nl;
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