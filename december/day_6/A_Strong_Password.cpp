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
    ll a[26];
    memset(a,0,sizeof(a));
    for(ll i=0;i<s.size();i++){
        a[s[i]-'a']++;
    }
    char c='a' ;
    for(ll i=0;i<26;i++){
        if(a[i]==0)c=i+'a';
    }
    bool found = false;
    for(ll i=1;i<s.size();i++){
        if(s[i-1]==s[i] && s[i-1]!=c){s.insert(s.begin()+i,c);found=true;break;}
    }
    if(!found){
        for(ll i=0;i<s.size();i++){
            if(s[i]!=c){
                s.insert(s.begin()+i+1,c);
                break;
            }
        }
    }
    // cout<<c<<" ";
    cout<<s<<nl;
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