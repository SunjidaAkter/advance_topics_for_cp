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
    ll n;cin>>n;
    set<ll>st;
    for(ll i=2;i<=sqrt(n);i++){
        if(n%i==0&&!st.count(i)){
            st.insert(i);
            n/=i;
            break;
        }
    }
    for(ll i=2;i<=sqrt(n);i++){
        if(n%i==0&&!st.count(i)){
            st.insert(i);
            n/=i;
            break;
        }
    }
    if(st.size()<2||st.count(n)||n==1){
        no;
    }else{
        yes;
        st.insert(n);
        while(!st.empty()){
            cout<<*st.begin()<<" ";
            st.erase(st.begin());
        }
        cout<<nl;
    }
}
int main(){
    FAST;
    int t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}