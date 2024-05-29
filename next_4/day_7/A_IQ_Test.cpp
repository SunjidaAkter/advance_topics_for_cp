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
    vector<vector<char>>v(6,vector<char>(6));
    for(ll i=0;i<6;i++){
        for(ll j=0;j<6;j++){
            v[i][j]='0';
        }
    }
    for(ll i=1;i<=4;i++){
        for(ll j=1;j<=4;j++){
            char x;cin>>x;
            v[i][j]=x;
        }
    }
    for(ll i=0;i<6;i++){
        for(ll j=0;j<6;j++){
            if(v[i][j]=='#'){
                if((v[i][j]==v[i-1][j]&&v[i][j]==v[i][j-1])||(v[i][j]==v[i-1][j]&&v[i][j]==v[i][j+1])||(v[i][j]==v[i+1][j]&&v[i][j]==v[i][j-1])||(v[i][j]==v[i+1][j]&&v[i][j]==v[i][j+1])){
                    yes;
                    return;
                }
            }
            if(v[i][j]=='.'){
                if((v[i][j]==v[i-1][j]&&v[i][j]==v[i][j-1])||(v[i][j]==v[i-1][j]&&v[i][j]==v[i][j+1])||(v[i][j]==v[i+1][j]&&v[i][j]==v[i][j-1])||(v[i][j]==v[i+1][j]&&v[i][j]==v[i][j+1])){
                    yes;
                    return;
                }
            }
        }
    }
    no;
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