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
vector<ll> sieve(ll n){
    ll *a = new ll[n + 1]();
    vector<ll> vect;
    for (ll i = 2; i <= n; i++){
        if (a[i] == 0){
            vect.push_back(i);
            for (ll j = i * i; j <= n; j += i){
                a[j] = 1;
            }
        }
    }
    return vect;
}
void solve(){
    ll n,k;cin>>n>>k;
    vector<ll> v = sieve(1000);
    map<ll,ll>mp;
    for(ll i=0;i<v.size();i++){
        mp[v[i]]++;
    }
    ll sum=0;   
    set<ll>st;
    for(ll i=0;i<v.size()-1;i++){
        // for(ll j=i+1;j<v.size();j++){
            if(2<=v[i]+v[i+1]+1 && v[i]+v[i+1]+1<=n && mp[v[i]+v[i+1]+1]>0){
                // cout<<v[i]+v[i+1]+1<<" nl ";
                sum++;
                st.insert(v[i]+v[i+1]+1);
            // }
        }
    }
    // cout<<st.size()<<"jj";
    if(k<=st.size())yes;
    else no;
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