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
vector<int> findAnagrams(string s, string p) {
        vector<int>mp1(26,0);
        vector<int>mp2(26,0);
        vector<int>v;
        for(int i=0;i<p.size();i++){
            mp1[p[i]-'a']++;
        }
        int cnt=0,chk=0;
        for(int i=0;i<s.size();i++){
            if(i<p.size()-1){
                mp2[s[i]-'a']++;
                // mp
            }else{
                mp2[s[i]-'a']++;
                if(mp1==mp2)v.push_back(chk);
                mp2[s[chk]-'a']--;
                chk++;
            }
        }
        return v;
    }
void solve(){
    string s,p;cin>>s>>p;
    vector<int>ans=findAnagrams(s,p);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    cout<<nl;
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