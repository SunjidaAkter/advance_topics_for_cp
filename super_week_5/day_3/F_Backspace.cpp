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
    if(s1.size()<s2.size()){
        no;
        return;
    }
    ll i=0,j=0,st=0;
    while(i!=s1.size()){
        if(i%2==st&&s1[i]==s2[j])j++,st=1-st;
        if(j==s2.size())break;
        i++;
    }
    if(j==s2.size()&&(s1.size()-i-1)%2==0){
        yes;return;
    }
    i=0,j=0,st=1;
    while(i!=s1.size()){
        if(i%2==st&&s1[i]==s2[j])j++,st=1-st;
        if(j==s2.size())break;
        i++;
    }
    if(j==s2.size()&&(s1.size()-i-1)%2==0){
        yes;return;
    }
    no;
}
int main(){
    FAST;
    int t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}