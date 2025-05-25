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
ll prime[100];
void solve(){
    ll n;cin>>n;
    string s;cin>>s;
    for(ll i=0;i<n;i++){
        if(s[i]=='1'||s[i]=='4'||s[i]=='6'||s[i]=='8'||s[i]=='9'){
            cout<<1<<nl;
            cout<<s[i]<<nl;
            return;
        }
    }
    for(ll i=0;i<n;i++){
        for(ll j=i+1;j<n;j++){
            if(!prime[(s[i]-'0')*10+(s[j]-'0')]){
                cout<<2<<nl;
                cout<<s[i]<<s[j]<<nl;
                return;
            }
        }
    }
}
int main(){
    FAST;
    int t=1;
    cin>>t;
    for(ll i=2;i<100;i++){
        prime[i]=true;
        for(ll j=2;j*j<=i;j++){
            if(i%j==0)prime[i]=false;
        }
    }
    while(t--){
        solve();
    }
    return 0;
}