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
    string s;cin>>s;
    char a[n][n];
    for(ll i=0;i<n;i++){
        for(ll j=0;j<n;j++)a[i][j]='=';
    }
    ll m=1,x=0,y=0;
    for(ll i=0;i<n;i++){
        if(s[i]=='2')x++;
        else y++;
    }
    if(x==2||x==1)no;
    else{
        for(ll i=0;i<n;i++){
            m=1;
            for(ll j=i;j<n;j++){
                if(i==j){
                    a[i][j]='X';
                    continue;
                }
                if(s[i]=='1'){
                    a[i][j]='=';
                    a[j][i]='=';
                }else{
                    if(s[j]=='2'&&m==1){
                        a[i][j]='+';
                        a[j][i]='-';
                        m=2;
                    }else{
                        a[i][j]='-';
                        a[j][i]='+';
                    }   
            
                }
            }
        }
        yes;
        for(ll i=0;i<n;i++){
            for(ll j=0;j<n;j++){
                cout<<a[i][j];
            }
            cout<<nl;
        }
    }
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