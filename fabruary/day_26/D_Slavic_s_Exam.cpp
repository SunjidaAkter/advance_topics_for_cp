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
    string s1,s2;cin>>s1>>s2;
    ll cnt=0,j=0;
    for(ll i=0;i<s1.size();i++){
        if((s1[i]==s2[j]||s1[i]=='?')){
            if(s1[i]=='?'&&j<s2.size())s1[i]=s2[j];
            if(s1[i]=='?'&&j>=s2.size())break;
            j++,cnt++;
        }
    }
    if(cnt>=s2.size()){
        yes;
        for(ll i=0;i<s1.size();i++){
            if(s1[i]=='?')cout<<'a';
            else cout<<s1[i];
        }
        cout<<nl;
    }
    else no;
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