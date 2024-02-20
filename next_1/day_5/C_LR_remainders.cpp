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
    ll n,m;cin>>n>>m;
    deque<ll>a;
    for(ll i=0;i<n;i++){
        ll x;cin>>x;
        a.push_back(x);
    }
    string s;cin>>s;
    vector<ll>v;
    vector<ll>ans;
    for(ll i=0;i<n;i++){
        if(s[i]=='L'){
            v.push_back(a.front());
            a.pop_front();
        }else{
            v.push_back(a.back());
            a.pop_back();
        }
    }
    reverse(all(v));
    ll prod=1;
    for(ll i=0;i<v.size();i++){
        prod*=v[i];
        prod%=m;
        ans.push_back(prod);
    }
    reverse(all(ans));
    for(ll i=0;i<ans.size();i++)cout<<ans[i]<<" ";
    cout<<nl;
}
int main(){
    FAST;
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}