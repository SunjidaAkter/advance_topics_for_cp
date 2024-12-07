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
    s[0]='(';
    ll g=1,f=0;
    for(ll i=1;i<n;i+=2){
        if(s[i]=='('&&!f){
            f=1;
            s[i+1]=')';
        }
        if(s[i]==')'&&!f){
            // g--;
            s[i+1]='(';
        }
        if(s[i]==')' && f){
            f=0;
            s[i+1]='(';
        }
        if(s[i]=='(' && f){
            f=0;
            s[i+1]=')';
        }   
    }
    vector<ll>v;
    ll sum=0,b=0;
    for(ll i=0;i<n;i++){
        if(s[i]=='('){
            v.push_back(i+1);
        }
        if(s[i]==')'){
            sum+=((i+1)-v[v.size()-1]);
            v.pop_back();
        }
    }
    cout<<sum<<nl;
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