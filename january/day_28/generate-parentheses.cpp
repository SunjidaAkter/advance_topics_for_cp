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
void recur(int open,int close,vector<string>&res,string str){
    if(open==0 && close==0){
        res.push_back(str);
        return;
    }
    if(open>0){
        str+='(';
        recur(open-1,close,res,str);
        str.pop_back();
    }
    if(close>0&&close>open){
        str+=')';
        recur(open,close-1,res,str);
        str.pop_back();
    }
}
vector<string> generateParenthesis(int n) {
    string str;
    vector<string>res;
    recur(n,n,res,str);
    return res;
}
void solve(){
    int n;cin>>n;
    vector<string>res=generateParenthesis(n);
    for(ll i=0;i<res.size();i++){
        cout<<res[i]<<nl;
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