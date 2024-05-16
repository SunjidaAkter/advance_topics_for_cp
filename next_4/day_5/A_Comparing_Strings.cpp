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
    if(s1.size()!=s2.size()){
        no;
        return;
    }
    vector<ll>v; 
    for(int i=0;i<s1.size();i++){
        if(s1[i]!=s2[i]){
            v.push_back(i);
        }
    }
    if(v.size()==2){
        if(s1[v[0]]==s2[v[1]]&&s2[v[0]]==s1[v[1]])yes;
        else no;
    }else no;
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