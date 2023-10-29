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
    ll n;cin>>n;
    if(n<10)cout<<n-1<<nl;
    else if(n<100)cout<<n-10<<nl;
    else if(n<1000)cout<<n-100<<nl;
    else if(n<10000)cout<<n-1000<<nl;
    else if(n<100000)cout<<n-10000<<nl;
    else if(n<1000000)cout<<n-100000<<nl;
    else if(n<10000000)cout<<n-1000000<<nl;
    else if(n<100000000)cout<<n-10000000<<nl;
    else if(n<1000000000)cout<<n-100000000<<nl;
    else if(n<10000000000)cout<<n-1000000000<<nl;
}
int main(){
    FAST;
    int t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}