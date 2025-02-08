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
    string str;cin>>str;
    ll s=0,p=0;
    if(str[0]=='s')str[0]='.';
    if(str[n-1]=='p')str[n-1]='.';
    for(ll i=0;i<n;i++){
        if(str[i]=='.')continue;
        if(str[i]=='s')s++;
        else p++;
    }
    if(s>0 && p>0)no;
    else yes;
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