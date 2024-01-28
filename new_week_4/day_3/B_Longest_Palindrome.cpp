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
bool isPalindrome(string str) {  
    int len = str.length(); 
    for(ll i = 0; i < len/2; i++) { 
        if(str[i] != str[len-1-i]) 
            return false; 
    } 
    return true; 
} 
void solve(){
    ll n,k;cin>>n>>k;
    map<string,ll>mp;
    vector<string>v(n);
    for(ll i=0;i<n;i++){cin>>v[i];mp[v[i]]=1;}
    string x="";
    for(ll i=0;i<v.size()-1;i++){
        string s=v[i];
        reverse(all(s));
        if(mp[s]&&mp[v[i]]&&v[i]!=s){
            x+=v[i];
            mp[s]=0;
            mp[v[i]]=0;
        }
    }
    string str=x;
    reverse(all(str));
    for(string val:v){
        // cout<<val<<" ";
        if(isPalindrome(val)){
            x+=val;
            break;
        }
    }
    x+=str;
    cout<<x.size()<<nl<<x;
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