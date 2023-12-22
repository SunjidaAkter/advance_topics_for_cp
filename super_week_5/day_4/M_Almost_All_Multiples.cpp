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
    ll n,x;cin>>n>>x;
    vector<ll>v(n);
    for(ll i=1;i<=n;i++)v[i-1]=i;
    v[0]=x;
    v[n-1]=1;
    if(n%x==0){
        if(n!=x){
            v[x-1]=n;
        }
        for(ll i=2;i<n;i++){
            if(i==x){
                ll mul=2*x;
                while(n%mul!=0&&mul<n){
                    mul+=x;
                }
                if(n%mul==0&&mul<n){
                    swap(v[i-1],v[mul-1]);
                    x=mul;
                }
            }
        }
        for(ll val:v)cout<<val<<" ";
        cout<<nl;
    }else cout<<-1<<nl;
}
int main(){
    FAST;
    int t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}