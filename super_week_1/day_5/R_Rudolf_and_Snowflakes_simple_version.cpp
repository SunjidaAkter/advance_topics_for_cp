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
set<ll>st;
void power_sum(){
    ll val=0,p=1;
    for(int k=2;k<=1000;k++){
        val=1+k;
        p=k*k;
        for(int j=2;j<=1e3;j++){
            val+=p;
            if(val>1e6)break;
            st.insert(val);
            p*=k;
        }
    }
}
void solve(){
    ll n;cin>>n;
    power_sum();
    if(st.find(n)!=st.end())yes;
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