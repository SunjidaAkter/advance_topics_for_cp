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
typedef pair<ll,ll>pii;
#define forl(ty,var,str,end) for(ty var=str; var<end; var++)
# define FAST ios_base :: sync_with_stdio (false) ; cin.tie(0) ; cout.tie(0)
void solve(){
    int n,m,d;cin>>n>>m>>d;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    set<pii>st;
    set<ll>idx;
    ll sum=0,mx=0,cnt=0,j=0;
    for(int i=0;i<n;i++){
        if(a[i]<0)continue;
        cnt++;sum+=a[i];
        st.insert({a[i],i+1});
        idx.insert(i+1);
        if(st.size()>m){
            sum-=(*st.begin()).first;
            idx.erase((*st.begin()).second);
            st.erase(st.begin());
        }
        mx=max(mx,sum-d*(*idx.rbegin()));
    }
    c(mx);
}
int main(){
    FAST;
    int t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}