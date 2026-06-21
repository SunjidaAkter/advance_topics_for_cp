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
    vector<vector<ll>>v(2,vector<ll>(n));
    for(ll i=0;i<2;i++){
        for(ll j=0;j<n;j++){
            cin>>v[i][j];
        }
    }
    ll j=0,i,sum=0;
    if(v[0][0]<=v[1][0]){
        i=1;
        sum+=v[1][0];
    }else{
        i=0;
        sum+=v[0][0];
    }

    while(j<n-1){
        if(i==0){
            // cout<<i<<" "<<v[i][j+1]<<nl;
            if(v[i+1][j+1]<=v[i][j+1]){
                j++;
                sum+=v[i][j];
                cout<<j<<" "<<v[i][j]<<" "<<sum<<nl;
            }else {
                i++;
                j++;
                sum+=v[i][j];
                cout<<j<<" "<<v[i][j]<<" "<<sum<<nl;
                // j++;
            }
        }else{
            if(v[i-1][j+1]<=v[i][j+1]){
                j++;
                sum+=v[i][j];
                cout<<j<<" "<<v[i][j]<<" "<<sum<<nl;
            }else {
                i--;
                j++;
                sum+=v[i][j];
                cout<<j<<" "<<v[i][j]<<" "<<sum<<nl;
            }
        }
    }
    cout<<sum<<nl;
    // }
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