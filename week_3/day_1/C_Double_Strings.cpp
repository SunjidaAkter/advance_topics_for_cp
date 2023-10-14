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
int isSubstring(string s1, string s2){
    return(s1.find(s2) != string::npos);
} 
void solve(){
    int n;cin>>n;
    vector<string>v(n);
    map<string,int>mp;
    for(int i=0;i<n;i++){
        cin>>v[i];
        mp[v[i]]++;
    }
    string ans="";
    for(int i=0;i<n;i++){
        bool flag=false;
        for(int j=0;j<v[i].size();j++){
            string s1=v[i].substr(0,j);
            string s2=v[i].substr(j);
            if(mp.count(s1)&&mp.count(s2)){
                flag=true;
                break;
            }
        }
        ans+=(flag?"1":"0");
    }
    cout<<ans<<nl;
}
int main(){
    FAST;
    int t;cin>>t;
    while(t--){
        solve();
    }
    return 0;
}