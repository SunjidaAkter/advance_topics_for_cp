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
    if(n&1){
        if(n%4==1){
            cout<<(n/2)-1<<" "<<(n/2)+1<<" "<<1<<nl;
        }else cout<<(n/2)-2<<" "<<(n/2)+2<<" "<<1<<nl;
    }else{
        if(n==12)cout<<9<<" "<<2<<" "<<1<<nl;
        else cout<<n-3<<" "<<2<<" "<<1<<nl;
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