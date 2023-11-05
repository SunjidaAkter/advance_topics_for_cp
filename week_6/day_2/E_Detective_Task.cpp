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
typedef pair<char,int>pii;
#define forl(ty,var,str,end) for(ty var=str; var<end; var++)
# define FAST ios_base :: sync_with_stdio (false) ; cin.tie(0) ; cout.tie(0)
void solve(){
    string s;cin>>s;int x;
    vector<pii>v;bool ok=false;
    if(s.size()==1||s[0]=='0'||s[s.size()-1]=='1')cout<<1<<nl;
    else{
        for(int i=0;i<s.size();i++){
            if(s[i]=='1')v.push_back({s[i],i});
            if(s[i]=='0'&&!ok){
                ok=true;
                if(!v.empty())x=i-v[v.size()-1].second+1;
                else x=i+1;
            }
            if(s[i]=='1'&&ok){
                x=1;
            }
        }
        if(v.empty()&&!ok)cout<<s.size()<<nl;
        else if(!ok)cout<<1<<nl;
        else c(x);
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