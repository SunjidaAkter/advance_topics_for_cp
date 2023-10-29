#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define all(X) (X).begin(), (X).end()
#define pub push_back
#define pob pop_back
#define nl  '\n'
#define c(x) cout<<x<<nl
#define yes cout<<"YES"<<nl
#define no cout<<"NO"<<nl
#define Yes cout<<"Yes"<<nl
#define No cout<<"No"<<nl
typedef pair<int,int>pii;
#define forl(ty,var,str,end) for(ty var=str; var<end; var++)
# define FAST ios_base :: sync_with_stdio (false) ; cin.tie(0) ; cout.tie(0)
void solve(){
    string s1,s2;cin>>s1>>s2;
    // cout<<s1<<" "<<s2<<nl;
    if((s1[s1.size()-1]=='L'&&s2[s2.size()-1]=='S')||(s1[s1.size()-1]=='M'&&s2[s2.size()-1]=='S')||(s1[s1.size()-1]=='L'&&s2[s2.size()-1]=='M'))cout<<">"<<nl;
    else if((s1[s1.size()-1]=='S'&&s2[s2.size()-1]=='M')||(s1[s1.size()-1]=='S'&&s2[s2.size()-1]=='L')||(s1[s1.size()-1]=='M'&&s2[s2.size()-1]=='L'))cout<<"<"<<nl;
    else if((s1[s1.size()-1]=='M'&&s2[s2.size()-1]=='M'))cout<<"="<<nl;
    else if(s1[s1.size()-1]==s2[s2.size()-1]){
        if(s1[s1.size()-1]=='S'){
            if(s1.size()>s2.size())cout<<"<"<<nl;
            else if(s1.size()<s2.size())cout<<">"<<nl;
            else cout<<"="<<nl;
        }
        else if(s1[s1.size()-1]=='L'){
            if(s1.size()>s2.size())cout<<">"<<nl;
            else if(s1.size()<s2.size())cout<<"<"<<nl;
            else cout<<"="<<nl;
        }
    }
}
int main(){
    FAST;
    int t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}
