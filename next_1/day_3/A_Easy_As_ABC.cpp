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
    vector<string>v(3);
    for(ll i=0;i<3;i++)cin>>v[i];
    set<string>st;
    for(ll l=0;l<3;l++){
        for(ll i=0;i<3;i++){
            string s="";
            s+=v[l][i];
            for(ll j=0;j<3;j++){
                if(abs(i-j)>1)continue;
                string str1=s;
                str1+=v[(l+1)%3][j];
                for(ll k=0;k<3;k++){
                    if(abs(k-j)>1)continue;
                    string str=str1;
                    str+=v[(l+2)%3][k];
                    cout<<str<<nl;
                }    
            }
        }
    }
    // cout<<"llllllllll"<<nl;
    for(ll l=0;l<3;l++){
        for(ll i=0;i<3;i++){
            string s="";
            s+=v[i][l];
            for(ll j=0;j<3;j++){
                if(abs(i-j)>1)continue;
                string str1=s;
                str1+=v[j][(l+1)%3];
                for(ll k=0;k<3;k++){
                    if(abs(k-j)>1)continue;
                    string str=str1;
                    str+=v[k][(l+2)%3];
                    cout<<str<<nl;
                }    
            }
        }

    }
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