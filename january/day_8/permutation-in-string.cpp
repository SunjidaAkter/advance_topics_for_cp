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
bool checkInclusion(string s1, string s2) {
    vector<int>v1(26,0);
    for(auto &c:s1){
        v1[c-'a']++;
    }
    int n=s1.size(),j=0,ok=0;
    vector<int>v2(26,0);
    for(int i=0;i<s2.size();i++){
        v2[s2[i]-'a']++;
        int b=0;
        if(i>=n-1){
            for(int k=0;k<26;k++){
                // cout<<v2[k]<<" "<<v1[k]<<" "<<i<<nl;
                if(v1[k]!=v2[k])b=1;
            }
            if(b==0)ok=1;
            else{
                // cout<<s2[j]<<" ";
                v2[s2[j]-'a']--;
                j++;
            }
        }
    }
    if(ok==1)return true;
    else return false;
}
void solve(){
    string s1,s2;cin>>s1>>s2;
    if(checkInclusion(s1,s2))cout<<"YES";
    else cout<<"NO";
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