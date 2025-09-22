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
    string s1="0",s2="0",x,y;cin>>x>>y;
    s1+=x;s2+=y;
    s1.push_back('0');s2.push_back('0');
    ll cnt=0;
    for(ll i=1;i<=n;i++){
        if(s1[i]=='0'){
            if(s2[i]=='1'){
                cnt++;
                s2[i]='0';
            }
        }else{
            if(s2[i-1]=='1'){
                cnt++;
                s2[i-1]='0';
            }else if(s2[i+1]=='1'){
                cnt++;
                s2[i+1]='0';
            }    
        }
    }
    cout<<cnt<<nl;

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