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
    int n,q;cin>>n>>q;
    ll a[n],sum=0;
    ll even=0,odd=0;
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<n;i++){
        if(a[i]%2==0)even++;
        sum+=a[i];
    }
    for(int i=0;i<n;i++){
        if(a[i]%2!=0)odd++;
    }
    // cout<<even<<" "<<odd<<" ";
    while(q--){
        ll x,y;cin>>x>>y;
        if(x==0){
            sum+=(y*even);
            if(y%2!=0){
                odd+=(even);
                even-=(even);
            }
            c(sum);
        }
        if(x==1){
            sum+=(y*odd);
            if(y%2!=0){
                even+=(odd);
                odd-=(odd);
            }    
            c(sum);
        }
    }
    // c(sum);
}
int main(){
    FAST;
    int t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}