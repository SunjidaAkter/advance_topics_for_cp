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
void solve(){
    ll n,k,missed,bkp,last;cin>>n>>k;
    vector<ll>v,tmp(n);
    for(int i=0;i<n;i++){
        ll x;cin>>x;
        v.push_back(x);
    }
    tmp=v;
    sort(all(tmp));
    missed=n;
    for(int i=0;i<n;i++){
        if(tmp[i]!=i){
            missed=i;
            break;
        }
    }
    for(int i=0;i<n;i++){
        bkp=v[i];
        v[i]=missed;
        missed=bkp;
    }
    v.push_back(missed);
    last=(k-1)%(n+1);
    for(int i=0;i<n;i++){
        cout<<v[(i+(n+1)-last)%(n+1)]<<" ";
    }
    cout<<nl;
}
int main(){
    FAST;
    int t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}