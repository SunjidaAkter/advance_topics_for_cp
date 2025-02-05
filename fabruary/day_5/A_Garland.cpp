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
    string s;cin>>s;
    set<char>st;
    map<char,ll>mp;
    for(ll i=0;i<s.size();i++){
        st.insert(s[i]);
        mp[s[i]]++;
    }
    if(st.size()==4||st.size()==3||(st.size()==2&&mp[s[0]]==2))cout<<4<<nl;
    else if(st.size()==1)cout<<-1<<nl;
    else if(st.size()==2) cout<<6<<nl;
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