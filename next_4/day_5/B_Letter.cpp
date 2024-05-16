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
    string s1,s2;
    getline(cin,s1);
    getline(cin,s2);
    map<char,ll>mp1;
    map<char,ll>mp2;
    for(ll i=0;i<s1.length();i++){
        mp1[(s1[i])]++;
    }
    for(ll i=0;i<s2.length();i++){
        mp2[(s2[i])]++;
    }
    if(mp1.size()<mp2.size()){
        no;return;
    }
    bool f=1;
    for(ll i=0;i<s2.size();i++){
        if(mp2[(s2[i])]>mp1[(s2[i])]&&s2[i]!=' '){
            f=0;break;
        }
    }
    if(f){
        yes;
    }else{
        no;
    }
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