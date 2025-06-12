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
    ll n,m,x,y;cin>>n>>m>>x>>y;
    char a[n][m];
    for(ll i=0;i<n;i++){
        for(ll j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    ll sum=0;
    for(ll i=0;i<n;i++){
        for(ll j=0;j<m;j++){
            if(a[i][j]=='*')continue;
            else{
                if(j<m-1&&a[i][j]==a[i][j+1]){
                    if(2*x>y){
                        sum+=y;j++;
                    }else{
                        sum+=x;
                    }
                }else sum+=x;
            }
        }
    }
    cout<<sum<<nl;
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