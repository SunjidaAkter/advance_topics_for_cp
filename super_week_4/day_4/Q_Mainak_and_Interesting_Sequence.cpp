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
    ll n,k;cin>>n>>k;
    if(n==1){
        Yes;cout<<k<<nl;
    }else{
        if(k>=n){
            if(n%2==0&&k%2==0){
                Yes;
                vector<ll>v(n);
                ll x=k%n,cnt=0;
                // cout<<x<<nl;
                while(x>0){
                    cout<<(k/n)+1<<" "<<(k/n)+1<<" ";
                    cnt+=2;
                    x-=2;
                }
                for(int i=0;i<(n-cnt);i++)cout<<k/n<<" ";
                cout<<nl;
            }else if(k%n==0){
                Yes;
                for(int i=0;i<n;i++){
                    cout<<k/n<<" ";
                }
                cout<<nl;
            }else if(n%2==1){
                Yes;
                for(int i=0;i<(n-1);i++)cout<<1<<" ";
                cout<<k-(n-1)<<nl;
            }else No;
        }else No;
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