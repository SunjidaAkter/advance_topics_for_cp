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
    ll n,m,d;cin>>n>>m>>d;
    ll a[n][m],b[n*m];
    for(ll i=0;i<n;i++){
        for(ll j=0;j<m;j++){
            cin>>a[i][j];
            b[i*m+j]=a[i][j];
        }
    }
    sort(b,b+n*m);
    for(ll i=0;i<n;i++){
        for(ll j=0;j<m;j++){
            if((a[0][0]-a[i][j])%d!=0){
                cout<<-1<<nl;
                return;
            }
        }
    }
    ll mn=LONG_MAX;
    if((m*n)%2!=0){
        ll sum=0;
        for(ll i=0;i<n*m;i++){
            sum+=abs(b[m*n/2]-b[i])/d;
        }
        mn=min(mn,sum);
    }else{
        ll sum1=0,sum2=0;
        for(ll i=0;i<n*m;i++){
            sum1+=abs(b[m*n/2]-b[i])/d;
        }
        for(ll i=0;i<n*m;i++){
            sum2+=abs(b[m*n/2-1]-b[i])/d;
        }
        mn=min(sum1,sum2);
    }
    cout<<mn<<nl;
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