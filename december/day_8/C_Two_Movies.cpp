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
    ll a[n];for(ll i=0;i<n;i++)cin>>a[i];
    ll b[n];for(ll i=0;i<n;i++)cin>>b[i];
    ll cinema1=0,cinema2=0,pos=0,neg=0;
    for(ll i=0;i<n;i++){
        if(a[i]>b[i])cinema1+=a[i];
        else if(a[i]<b[i])cinema2+=b[i];
        else if(a[i]==1)pos++;
        else if(a[i]==-1)neg++;
    }
    while(pos--){
        if(cinema1>cinema2)cinema2++;
        else cinema1++;
    }
    while(neg--){
        if(cinema1>cinema2)cinema1--;
        else cinema2--;
    }
    cout<<min(cinema1,cinema2)<<nl;
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