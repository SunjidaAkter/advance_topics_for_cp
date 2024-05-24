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
    string s1,s2;
    for(int i=0;i<n;i++){
        s1+=s[i];
    }
    for(int i=n;i<2*n;i++){
        s2+=s[i];
    }
    sort(all(s1));
    sort(all(s2));
    ll cnt1=0,cnt2=0;
    for(ll i=0;i<s1.size();i++){
        if((s1[i]-'0')<(s2[i]-'0')){
            cnt1++;
        }
    }
    for(ll i=0;i<s1.size();i++){
        if((s1[i]-'0')>(s2[i]-'0')){
            cnt2++;
        }
    }
    if(cnt1==s1.size()||cnt2==s2.size())yes;
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