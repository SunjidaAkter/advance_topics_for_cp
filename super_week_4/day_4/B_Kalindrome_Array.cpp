#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define all(X) (X).begin(), (X).end()
#define pub push_back
#define pob pop_back
#define nl  '\n'
#define c(x) cout<<x<<nl
#define yes cout<<"YES"<<nl
#define no cout<<"NO"<<nl
#define Yes cout<<"Yes"<<nl
#define No cout<<"No"<<nl
typedef pair<int,int>pii;
#define forl(ty,var,str,end) for(ty var=str; var<end; var++)
# define FAST ios_base :: sync_with_stdio (false) ; cin.tie(0) ; cout.tie(0)
bool chk(vector<ll>v,ll x){
    ll n=v.size(),i=0,j=n-1;
    while(i<j){
        if(v[i]==x)i++;
        else if(v[j]==x)j--;
        else if(v[j]!=v[i])return 0;
        else i++,j--;
    }
    return 1;
}
void solve(){
    ll n;cin>>n;
    vector<ll> a(n);
    for(int i=0;i<n;i++)cin>>a[i];
    bool ok=1;
    for(int i=0;i<n-i-1;i++){
        if(a[i]!=a[n-i-1]){
            ok=(chk(a,a[i])||chk(a,a[n-i-1]));
            break;
        }
    }
    if(ok)yes;
    else no;
}
int main(){
    FAST;
    int t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}