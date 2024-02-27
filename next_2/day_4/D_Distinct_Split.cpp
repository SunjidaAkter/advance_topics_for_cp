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
    map<char,ll>mp1;
    map<char,ll>mp2;
    mp1[s[0]]++;
    for(ll i=1;i<n;i++)mp2[s[i]]++;
    ll mx=mp1.size()+mp2.size();
    for(ll i=1;i<n-1;i++){
        mp1[s[i]]++;
        mp2[s[i]]--;
        if(mp2[s[i]]==0)mp2.erase(s[i]);
        mx=max((ll)(mp1.size()+mp2.size()),mx);
    }
    cout<<mx<<nl;
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