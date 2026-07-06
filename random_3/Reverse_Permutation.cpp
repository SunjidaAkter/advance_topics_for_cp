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
    vector<ll>a;
    vector<ll>b;
    bool flagA=false;
    bool flagB=false;
    // ll j=1;
    for(ll i=n-1;i>=0;i--){
        if(s[i]=='o' && !flagA){
            a.push_back(i+1);
            flagA=true;
            flagB=false;
        }else if(s[i]=='o' && !flagB){
            b.push_back(i+1);
            flagB=true;
            flagA=false;
        }else if(s[i]=='x' && !flagA){
            b.push_back(i+1);
            flagB=true;
            flagA=false;
        }else if(s[i]=='x' && !flagB){
            a.push_back(i+1);
            flagA=true;
            flagB=false;
        }
    }
    reverse(all(b));
    for(ll i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    for(ll i=0;i<b.size();i++){
        cout<<b[i]<<" ";
    }
    cout<<nl;
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