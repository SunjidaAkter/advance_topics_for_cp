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
struct stck{
  vector<ll>s,smn={LLONG_MAX},smx={LLONG_MIN};
  void push(ll x){
    s.push_back(x);
    smx.push_back(max(smx.back(),x));
    smn.push_back(min(smn.back(),x));
  }
  ll pop(){
    ll val=s.back();
    s.pop_back();
    smn.pop_back();
    smx.pop_back();
    return val;
  }
  bool empty(){
    return s.empty();
  }
  ll mx(){
    return smx.back();
  }  
  ll mn(){
    return smn.back();
  }  
};
stck s1,s2;

void add(ll x){
    s2.push(x);
}
void remove(){
    if(s1.empty()){
        while(!s2.empty()){
            s1.push(s2.pop());
        }
    }
    s1.pop();
}
ll k;
bool good(){
    ll mxx=max(s1.mx(),s2.mx());
    ll mnn=min(s1.mn(),s2.mn());
    return (mxx-mnn)<=k;
}
void solve(){
    ll n;cin>>n>>k;
    ll a[n];
    for(ll i=0;i<n;i++)cin>>a[i];
    ll l=0,ans=0;
    for(ll r=0;r<n;r++){
        add(a[r]);
        while(!good()){
            remove();
            l++;
        }
        ans+=(r-l+1);
    }
    cout<<ans;
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