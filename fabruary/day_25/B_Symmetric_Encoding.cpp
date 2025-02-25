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
    string s;cin>>s;
    map<char,char>mp;
    set<char>st;
    for(int i=0;i<n;i++){
        st.insert(s[i]);
    }
    vector<char>v1;
    while(st.size()>0){
        v1.push_back(*st.begin());
        st.erase(st.begin());
    }
    vector<char>v2=v1;
    reverse(all(v2));
    for(ll i=0;i<v1.size();i++)mp[v1[i]]=v2[i];;
    for(int i=0;i<n;i++){
        cout<<mp[s[i]];
    }
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