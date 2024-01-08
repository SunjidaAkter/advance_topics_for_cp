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
ll nb,ns,nc;
ll pb,ps,pc,r;
bool good(ll x,string str){
    ll b=0,s=0,c=0;
    for(int i=0;i<str.size();i++){
        if(str[i]=='B')b++;
        if(str[i]=='S')s++;
        if(str[i]=='C')c++;
    }
    return (((b*x)-min((b*x),nb))*pb+((c*x)-min((c*x),nc))*pc+((s*x)-min((s*x),ns))*ps)<=r;
}
void solve(){
    string str;cin>>str;
    cin>>nb>>ns>>nc;
    cin>>pb>>ps>>pc;
    cin>>r;
    ll l=0,r=1;
    while(good(r,str))r*=2;
    while(r>l+1){
        ll m=l+((r-l)/2);
        if(good(m,str))l=m;
        else r=m;
    }
    cout<<l;
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