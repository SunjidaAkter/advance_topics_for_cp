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
    string str;cin>>str;
    ll n=str.length();
    ll c2=0,c3=0,sum=0;
    for(ll i=0;i<n;i++){
        if(str[i]=='2')c2++;
        else if(str[i]=='3')c3++;
        sum+=str[i]-'0';
    }
    ll y=(9-sum%9)%9;
    for(ll i=0;i<=c3;i++){
        ll ny=(y-6ll*i)%9;
        if(ny<0)ny+=9;
        ll m=(ny*5)%9;
        if(m<=c2){
            yes;
            return;
        }
    }
    no;
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