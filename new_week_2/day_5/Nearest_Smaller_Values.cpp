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
    ll n;cin>>n;
    vector<pii>a(n);
    for(ll i=0;i<n;i++){
        ll x;cin>>x;
        a[i].first=x;
        a[i].second=i;
    }
    stack<pii>st;
    vector<ll>v;
    v.push_back(-1);
    for(ll i=1;i<n;i++){
        if(a[i-1].first<a[i].first){
            st.push(a[i-1]);
            v.push_back(a[i-1].second);
        }else{
            while(!st.empty()){
                if(st.top().first<a[i].first){
                    v.push_back(st.top().second);
                    break;
                }else st.pop();
            }
            if(st.empty())v.push_back(-1);
        }
    }
    for(ll val:v)cout<<val+1<<" ";
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