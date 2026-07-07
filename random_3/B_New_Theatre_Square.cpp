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
    vector<string>v(n);
    for(int i=0;i<n;i++)cin>>v[i];
    ll sum=0;
    for(int i=0;i<n;i++){
        ll cnt=0;
        for(int j=0;j<m;j++){
            if(v[i][j]=='*')continue;
            else{
                if(j<m-1 && v[i][j+1]==v[i][j]){
                    cnt+=min(x*2,y);
                    j++;
                }else cnt+=x;
            }
        }
        sum+=cnt;
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