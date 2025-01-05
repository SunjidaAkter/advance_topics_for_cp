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
vector<vector<string>> groupAnagrams(vector<string>& strs) {
    map<string,vector<string>>mp;
    for(int i=0;i<strs.size();i++){
    string s=strs[i];
    sort(s.begin(),s.end());
    mp[s].push_back(strs[i]);
    }   
    vector<vector<string>>v;
    for(auto it:mp){
    v.push_back(it.second);
    }
    return v;
}
void solve(){
  int n;cin>>n;  
  vector<string> strs(n);
  for(int i=0;i<n;i++){
    // string s;cin >> s;
    cin>>strs[i];
  }  
  vector<vector<string>>ans=groupAnagrams(strs);
  for(int i=0;i<ans.size();i++){
    for(int j=0;j<ans[i].size();j++){
      cout<<ans[i][j]<<" ";
    }
    cout<<nl;
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