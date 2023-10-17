#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define all(X) (X).begin(), (X).end()
#define pub push_back
#define pob pop_back
#define nl  '\n'
#define yes cout << "YES" << nl
#define no cout << "NO" << nl
#define Yes cout << "Yes" << nl
#define No cout << "No" << nl
typedef pair<int,int>pii;
#define forl(ty,var,str,end) for(ty var=str; var<end; var++)
# define FAST ios_base :: sync_with_stdio (false) ; cin.tie(0) ; cout.tie(0)
bool isSubstring(string chhoto, string boro){
    return (boro.find(chhoto) != string::npos);
}
void solve(){
    string s;cin>>s;
    int n=s.size();
    int x=n/3;
    string ans="";
    for(int i=0;i<=x+3;i++)ans+="Yes";
    if(isSubstring(s,ans))yes;
    else no;
}
int main(){
    FAST;
    int t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}