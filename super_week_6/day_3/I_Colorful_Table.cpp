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
    ll n,k;cin>>n>>k;
    ll a[n+1];
    set<ll>st;
    vector<ll>l(k+1,n+1),r(k+1,-1);
    
    for(ll i=1;i<=n;i++){
        cin>>a[i];
        l[a[i]]=min(l[a[i]],i);
        r[a[i]]=i;
        st.insert(a[i]);
    }
    for(ll i=k-1;i>=1;i--){
        l[i]=min(l[i],l[i+1]);
        r[i]=max(r[i],r[i+1]);
    }
    for(ll i=1;i<=k;i++){
        if(!st.count(i))cout<<0<<" ";
        else cout<<2*(r[i]-l[i]+1)<<" ";
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