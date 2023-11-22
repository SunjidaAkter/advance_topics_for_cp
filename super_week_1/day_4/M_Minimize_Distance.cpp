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
#define yes cout<<"YES"<<nl
#define Yes cout<<"Yes"<<nl
#define No cout<<"No"<<nl
typedef pair<int,int>pii;
#define forl(ty,var,str,end) for(ty var=str; var<end; var++)
# define FAST ios_base :: sync_with_stdio (false) ; cin.tie(0) ; cout.tie(0)
void solve(){
    ll n;cin>>n;
    ll k;cin>>k;
    ll a[n];
    for(ll i=0;i<n;i++)cin>>a[i];
    vector<ll>pos,neg;
    for(ll i=0;i<n;i++){
        if(a[i]<0)neg.push_back(abs(a[i]));
        else pos.push_back(a[i]);
    }
    sort(all(pos));
    sort(all(neg));
    ll ans=0,i=0,x;
    if(!pos.empty()){
        x=pos.size();
        while((x-k*i)>0){
            ans+=pos[(x-k*i)-1];
            i++;
        }
    }
    if(!neg.empty()){
        x=neg.size(),i=0;
        while((x-k*i)>0){
            ans+=neg[(x-k*i)-1];
            i++;
        }
    }
    if(neg.empty()){
        ans=2*ans-pos[pos.size()-1];
        cout<<ans<<nl;
    }else if(pos.empty()){
        ans=2*ans-neg[neg.size()-1];
        cout<<ans<<nl;
    }else{
        ans=2*ans-max(pos[pos.size()-1],neg[neg.size()-1]);
        cout<<ans<<nl;
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